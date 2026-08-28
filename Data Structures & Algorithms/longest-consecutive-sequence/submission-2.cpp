class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen = 0;
        for(int num : st){
            if(st.count(num - 1) == 0){
                int curr = num;
                int len  = 1;
                while(st.count(curr + 1)){
                    curr++;
                    len++;
                }

                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};