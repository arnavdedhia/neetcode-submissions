class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int max = 1;
        int curr = 1;
        for(int i = 1; i < nums.length; i++){
            for(int j = i; j < nums.length; j++){
                if(nums[j] > nums[j - 1]){
                    curr++;
                } else{
                    break;
                }
                if(curr > max){
                    max = curr;
                }
            }
            curr = 1;
        }
        int min = 1;
        curr = 1;
        for(int i = 1; i < nums.length; i++){
            for(int j = i; j < nums.length; j++){
                if(nums[j] < nums[j - 1]){
                    curr++;
                } else{
                    break;
                }
                if(curr > min){
                    min = curr;
                }
            }
            curr = 1;
        }
        if(max > min){
            return max;
        }
        return min;
    }
}