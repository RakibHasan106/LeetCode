public class Palindrome_number {
    public boolean isPalindrome(int x){
        boolean b;
        if(x<0){
            b=false;
        }
        else{
            String str = Integer.toString(x);
            int len = str.length();
            for(int i=0,j=len-1;i<len/2;i++,j--){
                if(str.charAt(i)!=str.charAt(j)){
                    b=false;
                    return b;
                }
            }
            b=true;
        }
        return b;
    }
    public static void main(String[] args){
        System.out.println(new Palindrome_number().isPalindrome(10));
    }
}
