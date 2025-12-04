class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int p1=0;
        int p2=0;

        while(p2<nums.length){
            if(nums[p2]%2==0){
                int temp=nums[p1];
                nums[p1]=nums[p2];
                nums[p2]=temp;

                p1++;
            }
            p2++;
        }

        return nums;
    }
}