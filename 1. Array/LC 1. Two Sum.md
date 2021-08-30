# LC 1. Two Sum
##### Relevant Links: [[Array]] | [[Hash Table]]
Type: #🔢 

URL: https://leetcode.com/problems/two-sum/

Difficulty: #🔷

---
> Given an array of integers `nums` and an integer `target`, return _indices of the two numbers such that they add up to `target`_. You may assume that each input would have **_exactly_ one solution**, and you may not use the _same_ element twice. You can return the answer in any order.

To solve this, we need to consider the [[Time Complexities]].

The initial way to approach this problem could be to run a nested for loop, with each loop being a pointer. The first pointer, which we can call pointer _i_ will start at the beginning of the array. The second pointer _j_ will be at index _i + 1_. Pointer _j_ will only go to the index [size], and pointer _i_ will go to index [size - 1]. 

The pointers will then iterate and we will check in each iteration if the values at both indices equal the target.

This will result in a ==O(n<sup>2</sup>)== solution. 

```C++
#include <iostream>

class Solution {
	public:
		std::vector<int> twoSum(std::vector<int> & nums, int target) {
			std::vector<int> ans;
			for (int i = 0; i < nums.size() - 1; i++) {
				for (int j = i + 1; j < nums.size(); j++) {
					if (nums[i] + nums[j] == target) {
						ans.push_back(i);
						ans.push_back(j);
					}
				}
			}
			return ans;
		}
};



```

## A better solution
Another solution we can think of is by using an [[Unordered Map]]. With an unordered map, we can store the difference between each element and the target. With the use of **find**, we can see if the complement (element - target) exists in the map. If it does, then we have found the pair. 

The key we are storing in the unordered map is the current number we are checking, or nums[i]. The value is just the index, so it would be just _i_. 

```C++
class Solution {
	public:
		std::vector<int> twoSum(std::vector<int> & nums, int target) {
			std::vector<int> ans;
			std::unordered_map<int,int> uMap;
			for (int i = 0;i < nums.size();i++) {
				int complement = target - nums[i];
				if (uMap.find(complement) != uMap.end()) // If found {
					ans.push_back(i); // Current Index
					ans.push_back(uMap[complement]); // Value of complement (key)
				}
				uMap[nums[i]] = i;
			}
			
		}
}


```


***[Work Through](https://notability.com/n/2MqK_80OW0k7Xs~p0lRIBc)***


---
References:


