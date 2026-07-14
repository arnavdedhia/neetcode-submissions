class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> has;
        for(int i = 0; i < nums.size(); i++){
            if(has.contains(nums[i])){
                return true;
            }
            has.insert({nums[i], 1});
        }
        return false;
    }
};