#include <math.h>
#include <memory.h>
#include "NormalAlgorithm.h"

using namespace std;

bool NormalAlgorithm::IsPrime(int n)
{
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int NormalAlgorithm::CountPrimes(int n)
{
    if(n <2)
        return false;

    bool *primeFlag = new bool[n];
    int count = 0;

    memset(primeFlag, true, n);

    for(int i = 2; i < n; ++i)
    {
        if(primeFlag[i])
        {
            ++count;
            int j = 2;
            while(i * j < n)
            {
                primeFlag[i * j] = false;
                ++j;
            }
        }
    }

    delete []primeFlag;
    return count;
}

int NormalAlgorithm::GetSum(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool NormalAlgorithm::HappyNumber(int n)
{
    bool hashMap[730] = {false};
    int m = n;

    while(m = GetSum(m))
    {
        if(m == 1)
            return true;
        else if(hashMap[m] || m == n)
            return false;
        hashMap[m] = true;
    }
}

int NormalAlgorithm::HouseRobber(vector<int>& nums)
{

}

bool NormalAlgorithm::IsPowerOfTwo(int n)
{
    if(n <= 0)
        return false;

    if(((n - 1) & n) == 0)
        return true;
    return false;
}

vector<string> NormalAlgorithm::SummaryRanges(vector<int>& nums)
{
    vector<string> ret;
    string temp;

    if(nums.size() < 1)
       return ret;

    size_t ibeg = 0, iend = 0;

    while(iend + 1 < nums.size())
    {
        if(nums[iend + 1] == nums[iend] + 1)
            ++iend;
        else
        {
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

string NormalAlgorithm::Int2String(int value, size_t length, int frombase)
{
    stringstream ss;
    switch(frombase)
    {
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
