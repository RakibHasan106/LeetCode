import java.util.*;

public class DNA {
    public static void main(String[] args){
        Solution s = new Solution();
        List<String>ans = s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
        System.out.println(ans.toString());
    }
    
}
class Solution{
    public List<String> findRepeatedDnaSequences(String s){
        HashMap<String,Integer> mp = new HashMap<>();
        List<String>res = new ArrayList<>() ;
        
        if (s.length()<=10){
            // System.out.println("Hey");
            return res;
        }
        
        for(int i=0;i<=s.length()-10;i++){
            String sub = s.substring(i, i+10); 
            // System.out.println(sub);
            mp.merge(sub,1, Integer::sum);
        }

        for(String p : mp.keySet()){
            if(mp.get(p)>1){ 
                res.add(p);
            }
        }


        return res;
    }
}
