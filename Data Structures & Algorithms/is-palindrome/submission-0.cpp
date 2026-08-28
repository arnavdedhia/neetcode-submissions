class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0; int end = s.length() - 1;
        while(start < end){
            while (start < end &&
                   !isalnum(static_cast<unsigned char>(s[start]))) {
                start++;
            }
            while (start < end &&
                   !isalnum(static_cast<unsigned char>(s[end]))) {
                end--;
            }

            if (tolower(static_cast<unsigned char>(s[start])) !=
                tolower(static_cast<unsigned char>(s[end]))) {
                return false;
            }
            end --;
            start++;
        }
        return true;
    }
};
