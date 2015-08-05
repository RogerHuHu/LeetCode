#ifndef _NORMALALGORITHM_H_
#define _NORMALALGORITHM_H_

#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <stdint.h>

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

    /*
      Given an array of integers, find if the array contains any duplicates.
    */
    bool ContainsDuplicate(vector<int>& nums);

    /*
      Given an array of integers and an integer k, find out whether there there are two distinct indices
      i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.
    */
    bool ContainsNearbyDuplicate(vector<int>& nums, int k);

    /*
      Given two strings s and t, write a function to determine if t is an anagram of s.
      For example,
      s = "anagram", t = "nagaram", return true.
      s = "rat", t = "car", return false.
    */
    bool IsAnagram(string s, string t);

    /*
      Reverse bits of a given 32 bits unsigned integer.
      For example, given input 43261596 (represented in binary as
      00000010100101000001111010011100), return 964176192
      (represented in binary as 00111001011110000010100101000000).
    */
    uint32_t ReverseBits(uint32_t n);

    /*
      Rotate an array of n elements to the right by k steps.
      For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
    */
    void Rotate(vector<int>& nums, int k);

    /*
      Given an integer n, return the number of trailing zeroes in n!.
      Note: Your solution should be in logarithmic time complexity.
    */
    int TrailingZeroes(int n);

    string Int2String(int value, size_t length, int frombase);

    void QuickSort(char *array, int _low, int _high);

    uint32_t GetBit(uint32_t value, int index);

    void Reverse(vector<int> &nums, int start, int end);
protected:
private:
};

#endif // _NORMALALGORITHM_H_
