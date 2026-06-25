class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int len = 10000;
        int curr = 0;
        int sum = 0;
        for(int i = 0; i < nums.length; i++){
            curr = 0;
            sum = 0;
            for(int j = i; j < nums.length; j++){
                if(curr < len){
                    sum += nums[j];
                    curr++;
                } else{
                    break;
                }
                if(sum >= target){
                    len = curr;
                }
            }
        }
        if(len == 10000){
            return 0;
        }
        return len;
    }
}