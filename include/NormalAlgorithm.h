#ifndef _NORMALALGORITHM_H_
#define _NORMALALGORITHM_H_

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class NormalAlgorithm {
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

    /*
        Given an integer, write a function to determine if it is a power of two.
    */
    bool IsPowerOfTwo(int n);

    /*
        Given a sorted integer array without duplicates, return the summary of its ranges.

        For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].
    */
    vector<string> SummaryRanges(vector<int>& nums);

    /*
      Find the total area covered by two rectilinear rectangles in a 2D plane.
      Each rectangle is defined by its bottom left corner and top right corner as shown in the figure.
    */
    int ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H);

    string Int2String(int value, size_t length, int frombase);
protected:
private:
};

#endif // _NORMALALGORITHM_H_
