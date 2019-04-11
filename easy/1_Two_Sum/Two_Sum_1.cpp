//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> a;
		int flag1 = 0,flag=false;
		for (auto beg = begin(nums); beg != end(nums); ++beg,++flag1)
		{
			int flag2 = 0;
			int n = target - *beg;
			for (auto rest = beg+1; rest < end(nums); ++rest)
			{
				++flag2;
				if (n == *rest)
				{
					a.push_back(flag1);
					a.push_back(flag1 + flag2);
					flag = true;
					break;
					
				}

			}
			if (flag)
				break;
		}
		return a;
	}
};

//Runtime: 268 ms, faster than 10.49% of C++ online submissions for Two Sum.
//Memory Usage : 9.1 MB, less than 100.00% of C++ online submissions for Two Sum