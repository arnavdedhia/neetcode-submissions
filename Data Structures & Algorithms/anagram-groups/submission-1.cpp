class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if (strs.empty()) return {};
        vector<vector<string>> ans = {{strs[0]}};
        if(strs.size() == 1){
            return ans;
        }
        unordered_map<string, int> dict;
        string sort = strs[0];
        std::sort(sort.begin(), sort.end());
        dict[sort] = 0;
        for(int i = 1; i < strs.size(); i++){
            sort = strs[i];
            std::sort(sort.begin(), sort.end());
            if(dict.contains(sort)){
                ans[dict[sort]].push_back(strs[i]);
            } else{
                dict[sort] = ans.size();
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};
