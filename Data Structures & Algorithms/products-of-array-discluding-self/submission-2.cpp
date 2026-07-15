class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        bool zero = false;
        bool zero2 = false;
        for(int a : nums){
            if(a == 0){
                if(zero){
                    zero2 = true;
                }
                zero = true;
            } else{
                mul *= a;
            }
        }
        vector<int> ret;
        for(int a : nums){
            if(zero2){
                ret.push_back(0);
            } else if(zero && a != 0){
                ret.push_back(0);
            } else if(!zero){
                ret.push_back(mul / a);
            } else{
                ret.push_back(mul);
            }
        }
        return ret;
    }
};
