public class merge_two_sorted_list {
    public static void main(String[] args) {
        
    }
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1==null && list2==null){
            return null;
        }
        ListNode mergedNode = new ListNode();
        ListNode head = mergedNode;
        
        while(list1!=null && list2!=null){
            if(list1.val<=list2.val){
                head.val = list1.val;
                list1 = list1.next;
            }
            else{
                head.val = list2.val;
                list2 = list2.next;
            }
            head.next = new ListNode();
            head = head.next;
        }

        while(list1!=null){
            head.val=list1.val;
            list1 = list1.next;
            if(list1!=null){
                head.next = new ListNode();
                head = head.next;
            }
        }
        while(list2!=null){
            head.val = list2.val;
            list2 = list2.next;
            if(list2!=null){
                head.next = new ListNode();
                head = head.next;
            }
            
            
        }


        return mergedNode;
    }
    public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }
}

//   Definition for singly-linked list.

 
