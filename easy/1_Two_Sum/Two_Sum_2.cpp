//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> map;
		for (int i = 0; i < nums.size(); i++) {
			int complement = target - nums[i];
			if (map.find(complement) != map.end()) {
				return { map[complement], i };
			}
			map[nums[i]] = i;
		}
		return {};
	}
};
//Runtime: 8 ms, faster than 99.94% of C++ online submissions for Two Sum.
//Memory Usage : 10.1 MB, less than 55.35% of C++ online submissions for Two Sum