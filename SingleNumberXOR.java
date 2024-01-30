public class SingleNumberXOR {
    public int singleNumber(int[] nums){
        int n=nums.length;
        int num=0;
        for(int i:nums){
            num = num ^ i;
        }
        return num;
    }
}
