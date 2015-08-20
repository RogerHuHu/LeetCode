#include <math.h>
#include <memory.h>
#include "NormalAlgorithm.h"

using namespace std;

bool NormalAlgorithm::IsPrime(int n) {
    if(n <= 1) return false;
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int NormalAlgorithm::CountPrimes(int n) {
    if(n <2)
        return false;

    bool *primeFlag = new bool[n];
    int count = 0;

    memset(primeFlag, true, n);

    for(int i = 2; i < n; ++i) {
        if(primeFlag[i]) {
            ++count;
            int j = 2;
            while(i * j < n) {
                primeFlag[i * j] = false;
                ++j;
            }
        }
    }

    delete []primeFlag;
    return count;
}

int NormalAlgorithm::GetSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool NormalAlgorithm::HappyNumber(int n) {
    bool hashMap[730] = {false};
    int m = n;

    while(m = GetSum(m)) {
        if(m == 1)
            return true;
        else if(hashMap[m] || m == n)
            return false;
        hashMap[m] = true;
    }
}

int NormalAlgorithm::HouseRobber(vector<int>& nums) {
    int rob = 0, n_rob = 0;
    int temp;

    for(size_t i = 0; i < nums.size(); ++i) {
        temp = n_rob;
        n_rob = rob > n_rob ? rob : n_rob;
        rob = temp + nums[i];
    }

    return rob > n_rob ? rob : n_rob;
}

bool NormalAlgorithm::IsPowerOfTwo(int n) {
    if(n <= 0)
        return false;

    if(((n - 1) & n) == 0)
        return true;
    return false;
}

vector<string> NormalAlgorithm::SummaryRanges(vector<int>& nums) {
    vector<string> ret;
    string temp;

    if(nums.size() < 1)
        return ret;

    size_t ibeg = 0, iend = 0;

    while(iend + 1 < nums.size()) {
        if(nums[iend + 1] == nums[iend] + 1)
            ++iend;
        else {
            temp = (ibeg == iend) ? Int2String(nums[ibeg], 0, 10) : (Int2String(nums[ibeg], 0, 10) + "->" + Int2String(nums[iend], 0, 10));
            ret.push_back(temp);
            ++iend;
            ibeg = iend;
        }
    }

    temp = (ibeg == iend) ? Int2String(nums[ibeg], 0, 10) : (Int2String(nums[ibeg], 0, 10) + "->" + Int2String(nums[iend], 0, 10));
    ret.push_back(temp);

    return ret;
}

int NormalAlgorithm::ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int rectArea1 = (C - A) * (D - B);
    int rectArea2 = (G - E) * (H - F);

    int overlapXL = (A > E) ? A : E;
    int overlapXR = (C < G) ? C : G;
    int overlapYL = (B > F) ? B : F;
    int overlapYH = (D < H) ? D : H;

    int overlapAread = (overlapXL < overlapXR && overlapYL < overlapYH) ? (overlapXR - overlapXL) * (overlapYH - overlapYL) : 0;
    return rectArea1 + rectArea2 - overlapAread;
}

bool NormalAlgorithm::ContainsDuplicate(vector<int>& nums) {
    map<int, int> int_map;

    for(size_t i = 0; i < nums.size(); ++i) {
        if(int_map.count(nums[i]) > 0)
            return true;
        int_map.insert(pair<int, int>(nums[i], i));
    }
    return false;
}

bool NormalAlgorithm::ContainsNearbyDuplicate(vector<int>& nums, int k) {
    map<int, int> int_map;

    for(size_t i = 0; i < nums.size(); ++i) {
        if(int_map.count(nums[i]) > 0) {
            map<int, int>::iterator iter = int_map.find(nums[i]);
            if((i - iter->second) <= k)
                return true;
            iter->second = i;
        }
        else
            int_map.insert(pair<int, int>(nums[i], i));
    }
    return false;
}

bool NormalAlgorithm::IsAnagram(string s, string t) {
    if(s.size() != t.size())
        return false;

    char *array1 = (char *)s.c_str();
    char *array2 = (char *)t.c_str();

    QuickSort(array1, 0, s.size() - 1);
    QuickSort(array2, 0, t.size() - 1);

    for(size_t i = 0; i < s.size(); ++i) {
        if(array1[i] != array2[i])
            return false;
    }
    return true;
}

uint32_t NormalAlgorithm::ReverseBits(uint32_t n) {
    uint32_t result = 0, temp;
    int i = 0, j = 31;
    for(int m = 0; m < 32; ++m) {
        temp = GetBit(n, i);
        result |= temp << j;
        ++i;
        --j;
    }
    return result;
}

void NormalAlgorithm::Rotate(vector<int>& nums, int k) {
    if(nums.size() <= 1)
        return;

    k = k % nums.size();

    Reverse(nums, 0, nums.size() - k - 1);
    Reverse(nums, nums.size() - k, nums.size() - 1);
    Reverse(nums, 0, nums.size() - 1);
}

int NormalAlgorithm::TrailingZeroes(int n) {
    if(n < 1) return 0;
    int cnt = 0;

    while(n) {
        cnt += n / 5;
        n /= 5;
    }
    return cnt;
}

int NormalAlgorithm::TitleToNumber(string s) {
    size_t cnt = s.size() - 1;
    int sum = 0;
    for(size_t i = 0; i < s.size(); ++i) {
        sum += Power(26, cnt--) * (s.at(i) - 'A' + 1);
    }

    return sum;
}

string NormalAlgorithm::ConvertToTitle(int n) {
    string result = "";
    while(n) {
        result = (char)((n - 1) % 26 + 'A') + result;
        n = (n - 1) / 26;
    }
    return result;
}

int NormalAlgorithm::MajorityElement(vector<int> &nums) {
    int candidate;
    int count = 0;

    for(size_t i = 0; i < nums.size(); ++i) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        }
        else {
            if(nums[i] == candidate)
                ++count;
            else
                --count;
        }
    }

    return candidate;
}

int NormalAlgorithm::CompareVersion(string version1, string version2) {
    vector<string> vec1 = Split(version1, ".");
    vector<string> vec2 = Split(version2, ".");

    size_t i, j;

    int value1, value2;
    for(i = 0, j = 0; i < vec1.size() && j < vec2.size(); ++i, ++j) {
        value1 = String2UInt(vec1[i], 10);
        value2 = String2UInt(vec2[j], 10);
        if(value1 != value2)
            return (value1 > value2) ? 1 : -1;
    }

    for(; i < vec1.size(); ++i)
        if(String2UInt(vec1[i], 10) != 0) return 1;
    for(; j < vec2.size(); ++j)
        if(String2UInt(vec2[j], 10) != 0) return -1;
    return 0;
}

vector<int> NormalAlgorithm::DiffWaysToCompute(string input) {
    vector<int> result;

    size_t len = input.size();
    for(size_t i = 0; i < len; ++i) {
        if(input.at(i) == '+' || input.at(i) == '-' || input.at(i) == '*') {
            vector<int> leftPart = DiffWaysToCompute(input.substr(0, i));
            vector<int> rightPart = DiffWaysToCompute(input.substr(i + 1));

            for(size_t m = 0; m < leftPart.size(); ++m) {
                for(size_t n = 0; n < rightPart.size(); ++n) {
                    switch(input.at(i)) {
                        case '+' :
                            result.push_back(leftPart[m] + rightPart[n]); break;
                        case '-' :
                            result.push_back(leftPart[m] - rightPart[n]); break;
                        case '*' :
                            result.push_back(leftPart[m] * rightPart[n]); break;
                        default : break;
                    }
                }
            }
        }
    }

    if(result.empty())
        result.push_back(atoi(input.c_str()));

    return result;
}

bool NormalAlgorithm::SearchMatrix(vector<vector<int> >& matrix, int target) {
    size_t hSize = matrix.size(), vSize = matrix[0].size();
    int i = 0, j = vSize - 1;
    while(i < hSize && j >= 0) {
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] > target) --j;
        else ++i;
    }
    return false;
}

vector<int> NormalAlgorithm::ProductExceptSelf(vector<int>& nums) {
    vector<int> result(nums.size(), 1);
    for(size_t i = 1; i < nums.size(); ++i)
        result[i] = result[i - 1] * nums[i - 1];

    int right = 1;
    for(int j = nums.size() - 1; j >= 0; --j) {
        result[j] *= right;
        right *= nums[j];
    }
    return result;
}

int NormalAlgorithm::CountDigitOne(int n) {
    int oneCnt = 0;
    for(long m = 1; m <= n; m *= 10) {
        int a = n / m;
        int b = n % m;
        oneCnt += (a + 8) / 10 * m + (a % 10 == 1) * (b + 1);
    }
    return oneCnt;
}

int NormalAlgorithm::AddDigits(int num) {
    return (num - 1) % 9 + 1;
}

bool NormalAlgorithm::IsUgly(int num) {
    if(num <= 0) return false;

    while(num % 5 == 0) num /= 5;NormalAlgorithm
    while(num % 3 == 0) num /= 3;
    while(num % 2 == 0) num /= 2;

    return num == 1;
}

int NormalAlgorithm::NthUglyNumber(int n) {
    int cnt = 0, i = 1;
    while(cnt < n) {
        if(IsUgly(i++)) ++cnt;
    }
    return --i;
}

string NormalAlgorithm::Int2String(int value, size_t length, int frombase) {
    stringstream ss;
    switch(frombase) {
        case 10:
            ss << value;
            break;
        case 16:
            ss << std::hex << value;
            break;
        default:
            break;
    }

    string result = ss.str();
    if(result.size() < length)
        result = string(length - result.size(), '0') + result;
    return result;
}

void NormalAlgorithm::QuickSort(char *array, int _low, int _high) {
    if(_low >= _high)
        return;
    char flag = array[_low], temp;
    int low = _low, high = _high;
    while(low < high) {
        while(low < high && array[high] > flag)
            --high;
        while(low < high && array[low] <= flag)
            ++low;
        if(low < high) {
            temp = array[high];
            array[high] = array[low];
            array[low] = temp;
        }
    }
    array[_low] = array[low];
    array[low] = flag;

    QuickSort(array, _low, low - 1);
    QuickSort(array, low + 1, _high);
}

uint32_t NormalAlgorithm::GetBit(uint32_t value, int index)
{
    return (value & (1 << index)) >> index;
}

void NormalAlgorithm::Reverse(vector<int> &nums, int start, int end) {
    for(size_t i = start, j = end; i < j; ++i, --j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

int NormalAlgorithm::Power(int value, int pow) {
    int result = 1;
    while(pow--) {
        result *= value;
    }
    return result;
}

vector<string> NormalAlgorithm::Split(string value, string pattern) {
    string::size_type pos;
    vector<string> result;
    value += pattern;
    string::size_type size = value.size();

    for(string::size_type i = 0; i < size; ++i) {
        pos = value.find(pattern, i);
        if(pos < size) {
            result.push_back(value.substr(i, pos - i));
            i = pos + pattern.size() - 1;
        }
    }
    return result;
}

uint32_t NormalAlgorithm::String2UInt(string value, int frombase) {
    return (uint32_t)strtol(value.c_str(), NULL, frombase);
}
