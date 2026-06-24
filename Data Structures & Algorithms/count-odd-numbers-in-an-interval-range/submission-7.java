class Solution {
    public int countOdds(int low, int high) {
        if(low == high && low % 2 == 0){
            return 0;
        }
        int diff = high - low + 1;
        double div = diff / 2.0;
        return (int)Math.ceil(div);
    }
}