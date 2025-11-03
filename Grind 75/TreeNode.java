import java.util.*;

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x){
        val = x;
    }
}


class lowest_common_ancestor{
    public static void main(String[] args){
        
    }
}

public class Solution {
    public ArrayList<TreeNode>p_path=new ArrayList<>();
    public ArrayList<TreeNode>q_path=new ArrayList<>();
    public static int p_found =0;
    public static int q_found = 0;
    public void findPath(TreeNode root,TreeNode p, TreeNode q,Deque<TreeNode>current_parents){
        if(root.left!=null || root.right!=null){
            System.out.println("Parent : "+root.val);
            current_parents.push(root);
        }
        if(root.val==p.val){
           
            for(TreeNode item:current_parents){
                p_path.add(item);
            }
            Collections.reverse(p_path);
            System.out.println("p_paths:"+p_path.toString());
            p_found = 1;
        }
        if(root.val==q.val){
            for(TreeNode item:current_parents){
                q_path.add(item);
            }
            Collections.reverse(q_path);
            System.out.println(q_path.toString());
            q_found = 1;
        }
        if(p_found==1 && q_found==1){
            return;
        }
        if(root.left!=null){
            findPath(root.left,p,q,current_parents);
        }
        if(root.right!=null){
            findPath(root.right,p,q,current_parents);
        }
        // if(root.val==current_parents.peek().val){
        //     TreeNode s = current_parents.pop();
        // }
    }
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        TreeNode res;
        Deque<TreeNode>current_parents = new ArrayDeque<>();
        Solution s1 = new Solution();
        s1.findPath(root,p,q,current_parents);
        // for(TreeNode a:p_path){
        //     System.out.println(a.val);
        // }
        // System.out.println("q:");
        // for(TreeNode a:q_path){
        //     System.out.println(a.val);
        // }
        if(s1.p_path.size()>s1.q_path.size()){
            int i=0;
            for(;i<s1.p_path.size();i++){
                if(i==s1.q_path.size() || s1.q_path.get(i).val!=s1.p_path.get(i).val){
                    break;
                }
            }
           res = p_path.get(i-1);
        }
        else{
            int i = 0 ;
            for(;i<s1.q_path.size();i++){
                if(i==s1.p_path.size() || s1.q_path.get(i).val!=s1.p_path.get(i).val){
                    break;
                }
            }
            res = s1.q_path.get(i-1);
        }
        
        return res;
    }
}