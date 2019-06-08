class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> comp;
        unordered_map<int, int>::iterator itm;
        for(int i = 0; i < nums.size(); ++i)
        {
            itm = comp.find(target-nums[i]);
            if(itm != comp.end())
                return {itm -> second, i};
            comp[nums[i]] = i;
        }
        return {};
    }
};