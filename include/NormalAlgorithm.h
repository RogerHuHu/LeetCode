#ifndef _NORMALALGORITHM_H_
#define _NORMALALGORITHM_H_

#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <stdint.h>
#include <stdlib.h>

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

    /*
      Given a column title as appear in an Excel sheet, return its corresponding column number.
      For example:
      A -> 1
      B -> 2
      C -> 3
      ...
      Z -> 26
      AA -> 27
      AB -> 28
    */
    int TitleToNumber(string s);

    /*
      Given a positive integer, return its corresponding column title as appear in an Excel sheet.
      For example:
      1 -> A
      2 -> B
      3 -> C
      ...
      26 -> Z
      27 -> AA
      28 -> AB
    */
    string ConvertToTitle(int n);

    /*
      Given an array of size n, find the majority element. The majority element is the element that
      appears more than ⌊ n/2 ⌋ times.
    */
    int MajorityElement(vector<int> &nums);

    /*
      Compare two version numbers version1 and version2.
      If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.
      Here is an example of version numbers ordering:
      0.1 < 1.1 < 1.2 < 13.37
    */
    int CompareVersion(string version1, string version2);

    /*
      Given a string of numbers and operators, return all possible results from computing all
      the different possible ways to group numbers and operators. The valid operators are
      +, - and *.
      Example 1
      Input: "2-1-1".
      ((2-1)-1) = 0
      (2-(1-1)) = 2
      Output: [0, 2]
    */
    vector<int> DiffWaysToCompute(string input);

    /*
       Write an efficient algorithm that searches for a value in an m x n matrix. This matrix
       has the following properties:
       1.Integers in each row are sorted in ascending from left to right.
       2.Integers in each column are sorted in ascending from top to bottom.
       For example,
       Consider the following matrix:
       [
           [1,   4,  7, 11, 15],
           [2,   5,  8, 12, 19],
           [3,   6,  9, 16, 22],
           [10, 13, 14, 17, 24],
           [18, 21, 23, 26, 30]
       ]
       Given target = 5, return true.
       Given target = 20, return false.
    */
    bool SearchMatrix(vector<vector<int> >& matrix, int target);

    /*
       Given an array of n integers where n > 1, nums, return an array output such
       that output[i] is equal to the product of all the elements of nums except nums[i].
       Solve it without division and in O(n).
       For example, given [1,2,3,4], return [24,12,8,6].
    */
    vector<int> ProductExceptSelf(vector<int>& nums);

    /*
       Given an integer n, count the total number of digit 1 appearing in all non-negative
       integers less than or equal to n.
       For example:
       Given n = 13,
       Return 6, because digit 1 occurred in the following numbers: 1, 10, 11, 12, 13.
    */
    int CountDigitOne(int n);

    /*
       Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
       For example:
       Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
    */
    int AddDigits(int num);

    /*
       Write a program to check whether a given number is an ugly number.
       Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.
       For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
       Note that 1 is typically treated as an ugly number.
    */
    bool IsUgly(int num);

    /*
       Write a program to find the n-th ugly number.
       Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.
       For example, 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
       Note that 1 is typically treated as an ugly number.
    */
    int NthUglyNumber(int n);

    /*
       Given an array of numbers nums, in which exactly two elements appear only once and all the
       other elements appear exactly twice. Find the two elements that appear only once.
       For example:
       Given nums = [1, 2, 1, 3, 2, 5], return [3, 5].
    */
    vector<int> SingleNumber(vector<int> &nums);

    /*
       Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
       The algorithm should run in linear time and in O(1) space.
    */
    vector<int> MajorityElementII(vector<int> &nums);

    string Int2String(int value, size_t length, int frombase);

    void QuickSort(char *array, int _low, int _high);

    uint32_t GetBit(uint32_t value, int index);

    void Reverse(vector<int> &nums, int start, int end);

    int Power(int value, int pow);

    vector<string> Split(string value, string pattern);

    uint32_t String2UInt(string value, int frombase);

    int Min(int a, int b, int c);
protected:
private:
};

#endif // _NORMALALGORITHM_H_
