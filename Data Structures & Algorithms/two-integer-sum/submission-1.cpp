class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> a;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(a.contains(target - nums[i])){
                ans.push_back(a[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            a[nums[i]] = i;
        }
        return ans;
    }
};
