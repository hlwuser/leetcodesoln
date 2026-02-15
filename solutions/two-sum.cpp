/*
 * Problem: 1. Two Sum
 * URL: https://leetcode.com/problems/two-sum/
 * Date: 2026-02-15
 */

class Solution {class Solution {
public:public:
    vector<int> twoSum(vector<int>& nums, int target) {    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  // value -> index        unordered_map<int, int> mp;  // value -> index
                
        for (int i = 0; i < nums.size(); i++) {        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];            int complement = target - nums[i];
                        
            if (mp.find(complement) != mp.end()) {            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};                return {mp[complement], i};
            }            }
                        
            mp[nums[i]] = i;            mp[nums[i]] = i;
        }        }
                
        return {};  // If no solution found        return {};  // If no solution found
    }    }
};};