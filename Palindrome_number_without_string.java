import java.util.ArrayList;

public class Palindrome_number_without_string {
    public boolean isPalindrome(int x){
        if(x<0){
            return false;
        }
        else{
            ArrayList<Integer>numbers=new ArrayList<>();
            
            while(x!=0){
                int temp = x%10;
                numbers.add(temp);
                x/=10;
            }
            for(int i=0,j=numbers.size()-1;i<numbers.size()/2;i++,j--){
                if(numbers.get(i)!=numbers.get(j)){
                    return false;
                }
            }
            return true;
        }
    }
    public static void main(String[] args){
        System.out.println(new Palindrome_number_without_string().isPalindrome(-125));
    }
}
