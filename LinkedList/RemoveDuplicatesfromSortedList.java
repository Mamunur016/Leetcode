public class RemoveDuplicatesfromSortedList {

    // Definition for singly-linked list.
    public class ListNode {
        int val;
        ListNode next;

        ListNode() {
        }

        ListNode(int val) {
            this.val = val;
        }

        ListNode(int val, ListNode next) {
            this.val = val;
            this.next = next;
        }
    }

    class Solution {
        public ListNode deleteDuplicates(ListNode head) {

            ListNode curr = head;

            while (curr != null) {
                ListNode tmp = curr;

                while (tmp.next != null) {

                    if (curr.val == tmp.next.val) {
                        tmp.next = tmp.next.next;
                    } else {
                        tmp = tmp.next;
                    }
                }
                curr = curr.next;
            }

            return head;
        }
    }

    public static void main(String[] args) {
        // TODO Auto-generated method stub

    }
}
