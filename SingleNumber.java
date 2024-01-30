import java.util.HashMap;

public class SingleNumber {
    public int singleNumber(int[] nums) {
        HashMap<Integer,Integer> noOfAppearence = new HashMap<>();
        int n=nums.length;
        int appearance;
        for(int i=0;i<n;i++){
            if(noOfAppearence.get(nums[i])!=null){
                appearance=noOfAppearence.get(nums[i]);
                appearance++;
                noOfAppearence.put(nums[i],appearance);
            }
            else{
                noOfAppearence.put(nums[i],1);
            }
        }
        for(int key:noOfAppearence.keySet()){
            if(noOfAppearence.get(key)==1){
                return key;
            }
        }
        return 0;
    }
}
