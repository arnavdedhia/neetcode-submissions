class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<string, int> letters;
        for(int i = 0; i < s.length(); i++){
            string sub = s.substr(i, 1);
            if(letters.contains(sub)){
                letters[sub] = letters[sub] + 1;
            } else{
                letters[sub] = 1;
            }
        }
        for(int i = 0; i < s.length(); i++){
            string sub = t.substr(i, 1);
            if(letters.contains(sub)){
                letters[sub] = letters[sub] - 1;
                if(letters[sub] < 0){
                    return false;
                }
            } else{
                return false;
            }
        }
        return true;
    }
};
