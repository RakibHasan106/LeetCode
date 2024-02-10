public class Reverse_Integer {
    public int reverse(int x){
        int sol=0;
        
        if(x>0){
            while(x>0){
                if(sol > Integer.MAX_VALUE/10){
                    sol=0;
                    break;
                }
                sol=sol*10 + x%10;
                x/=10;
            }
        }
        else if(x<0){
            sol=0;
            while(x<0){
                if(sol < Integer.MIN_VALUE/10){
                    sol=0;
                    break;
                }
                sol=sol*10 + x%10;
                x/=10;

            }
        }
        
        return sol;
    }
    public static void main(String[] args){
        System.out.println(new Reverse_Integer().reverse(-2147483647));
    }
}
