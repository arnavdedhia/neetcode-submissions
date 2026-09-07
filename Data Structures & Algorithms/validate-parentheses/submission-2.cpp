#include <stack>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        if(s.length() % 2 == 1){
            return false;
        }
        for(char next : s){
            if(next == '{' || next == '(' || next == '['){
                stack.push(next);
            } else{
                if(stack.empty()){
                    return false;
                }
                char pre = stack.top();
                stack.pop();
                if(pre == '(' && next == ')'){
                    continue;
                }
                if(pre == '{' && next == '}'){
                    continue;
                }
                if(pre == '[' && next == ']'){
                    continue;
                }
                return false;
            }
        }
        if(stack.empty()){
            return true;
        }
        return false;
    }
};
