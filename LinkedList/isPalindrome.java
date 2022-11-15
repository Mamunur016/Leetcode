
public class isPalindrome {
	ListNode head;

	class ListNode {

		int val;
		ListNode next;

		ListNode(int val) {
			this.val = val;
			this.next = null;
		}
	}

	public ListNode reverse(ListNode head) {

		ListNode prev = null;
		ListNode curr = head;

		while (curr != null) {

			ListNode next = curr.next;
			curr.next = prev;

			/// update the value

			prev = curr;
			curr = next;
		}
		return prev;
	}

	public ListNode findMiddle(ListNode head) {

		ListNode hair = head;
		ListNode turtle = head;

		while (hair.next != null && hair.next.next != null) {
			hair = hair.next.next;
			turtle = turtle.next;
		}

		return turtle;
	}

	public boolean isPalindromeFunc() {

		if (head == null || head.next == null) {

			return true;
		}

		ListNode middle = findMiddle(head);
		ListNode secondHalfStart = reverse(middle.next);

		ListNode firstHalfStart = head;

		while (secondHalfStart != null) {

			if (firstHalfStart.val != secondHalfStart.val) {
				return false;
			}
			firstHalfStart = firstHalfStart.next;
			secondHalfStart = secondHalfStart.next;
		}

		return true;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
