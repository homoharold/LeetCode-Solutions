class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> comp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (comp.count(nums[i]))
            {
                return {comp[nums[i]], i};
            }
            comp[target - nums[i]] = i;
        }
        return {};
    }
};
