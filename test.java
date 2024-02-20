public class test {
    public long factorial(int n){
        long factorial=1;
        while(n>=1){
            factorial*=n;
            n--;
        }
        return factorial;
    }
    public static void main(String[] args){
        System.out.println(new FactorialTrailingZeros().solution(200));
    }
}
