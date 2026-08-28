class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> count;
        for(int i = 0; i < numbers.size(); i++){
            if(count.contains(target - numbers[i])){
                return {count[target - numbers[i]], i + 1};
            }
            count[numbers[i]] = i + 1;
        }
    }
};
