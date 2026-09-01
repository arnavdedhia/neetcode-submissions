#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& h) {
        int len = h.size();
        int start = 0; int end = len - 1;
        int max = std::min(h[start], h[end]) * (end - start);
        while(start != end){
            int calc = std::min(h[start], h[end]) * (end - start);
            max = std::max(max, calc);
            if(h[start] < h[end]){
                start++;
            } else{
                end--;
            }
        }
        return max;
    }
};
