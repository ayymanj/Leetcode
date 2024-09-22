class Solution {
    public int[] twoSum(int[] nums, int target) {
        int count = 0;
        int count2 = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums.length<=2){
                if(nums[i]+nums[i+1]==target){
                    count = i;
                    count2 = i+1;
                    break;
                }
            }
            else{
                for(int j = i+1; j <= nums.length - 1; j++){
                    if(nums[i]+nums[j]==target){
                        count = i;
                        count2 = j;
                        break;
                    }
                }
            }
        }
        int [] arr = new int [2];
        arr[0]=count;
        arr[1]=count2;
        return arr;

    }
}