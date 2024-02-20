public class FactorialTrailingZeros {
    public int solution(int n){
        if(n<5){
            return 0;
        }
        int m=5,zeros=0;
        while(m<=n){
            zeros+=n/m;
            m*=5;
        }
        return zeros ;
    }
}
