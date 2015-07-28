#ifndef _NORMALALGORITHM_H_
#define _NORMALALGORITHM_H_

#include <iostream>
#include <vector>

using namespace std;

class NormalAlgorithm
{
    public:
        bool IsPrime(int n);
        /*
            Count the number of prime numbers less than a non-negative number, n
        */
        int CountPrimes(int n);

        int GetSum(int n);

        /*
            A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the
            sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly
            in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

            Example: 19 is a happy number

                1^2 + 9^2 = 82
                8^2 + 2^2 = 68
                6^2 + 8^2 = 100
                1^2 + 0^2 + 0^2 = 1
        */
        bool HappyNumber(int n);

        /*
            You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the
            only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will
            automatically contact the police if two adjacent houses were broken into on the same night.

            Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money
            you can rob tonight without alerting the police.
        */
        int HouseRobber(vector<int>& nums);
    protected:
    private:
};

#endif // _NORMALALGORITHM_H_
