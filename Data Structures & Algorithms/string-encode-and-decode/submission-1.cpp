class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string ret;
        for(string a : strs){
            ret += "." + a;
        }
        return ret;
    }

    vector<string> decode(string s) {
        if(s.length() == 0){
            return {};
        }
        if(s.length() == 1){
            return {""};
        }
        vector<string> ret;
        int start = 1;
        int cur = 1;
        for(int i = 1; i < s.length(); i++){
            if(s.substr(i, 1) == "."){
                ret.push_back(s.substr(start, i - start));
                start = i + 1;
            }
        }
        ret.push_back(s.substr(start));
        return ret;
    }
};
