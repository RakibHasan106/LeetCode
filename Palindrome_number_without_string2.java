public class Palindrome_number_without_string2 {
    public boolean isPalindrome(int x){
        if(x<0 || (x%10==0)){
            return false;
        }
        int reversed_x = 0;
        int n=x;
        while(n>0){
            reversed_x=reversed_x*10 + n%10;
            n/=10;
        }
        if(reversed_x==x){
            return true;
        }
        else{
            //System.out.println(reversed_x);
            return false;
        }
    }
    public static void main(String[] args){
        System.out.println(new Palindrome_number_without_string2().isPalindrome(121));
    }
}
