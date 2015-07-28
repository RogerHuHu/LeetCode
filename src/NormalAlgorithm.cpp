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
