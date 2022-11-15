public class LL2 {

	Node head;

	class Node {
		int data;
		Node next;

		Node(int data) {
			this.data = data;
			this.next = null;
		}
	}

	/// sort the linkList

	public void sortList() {

		if (head == null || head.next == null) {
			return;
		}
		Node curr = head;
		Node index = null;
		int tmp;

		while (curr != null) {
			index = curr.next;

			while (index != null) {
				if (curr.data > index.data) {
					tmp = curr.data;
					curr.data = index.data;
					index.data = tmp;
				}
				index = index.next;
			}
			curr = curr.next;
		}

	}
	/// insert first in the linkList

	public void addFirst(int data) {

		Node newNode = new Node(data);

		if (head == null) {
			head = newNode;
			return;
		}

		newNode.next = head;
		head = newNode;
	}

	/// insert element last in the linkList

	public void addLast(int data) {

		Node newNode = new Node(data);

		if (head == null) {
			head = newNode;
			return;
		}
		Node currNode = head;
		while (currNode.next != null) {
			currNode = currNode.next;
		}

		currNode.next = newNode;
	}

	// Insert after a node
	public void insertAfter(Node prev_node, int new_data) {

		if (prev_node == null) {
			System.out.println("The given previous node cannot be null");
			return;
		}

		Node new_node = new Node(new_data);
		new_node.next = prev_node.next;
		prev_node.next = new_node;

	}

	/// remove first element in list

	public void removeFirst() {

		if (head == null) {
			System.out.println("list already empty!");
			return;
		}
		head = head.next;
	}

	/// remove last element in the list

	public void removeLast() {

		if (head == null) {
			System.out.println("Nothing to deleted!");
			return;
		}
		if (head.next == null) {
			head = null;
			return;
		}
		Node currNode = head;
		Node lastNode = head.next;

		while (lastNode.next != null) {
			currNode = currNode.next;
			lastNode = lastNode.next;
		}

		currNode.next = null;
	}

	// Delete a node

	void deleteNode(int position) {

		if (head == null)
			return;

		Node temp = head;

		if (position == 0) {
			head = temp.next;
			return;
		}
		// Find the key to be deleted
		for (int i = 0; temp != null && i < position - 1; i++)
			temp = temp.next;

		// If the key is not present
		if (temp == null || temp.next == null)
			return;

		// Remove the node
		Node next = temp.next.next;

		temp.next = next;
	}

	/// reverse the list

	public void reverseList() {

		if (head == null || head.next == null) {

			return;
		}

		Node prevNode = head;
		Node currNode = head.next;

		while (currNode != null) {

			Node nextNode = currNode.next;
			currNode.next = prevNode;

			/// update node
			prevNode = currNode;
			currNode = nextNode;
		}

		head.next = null;
		head = prevNode;
	}

	/// print list

	public void printList() {

		if (head == null) {
			System.out.println("list is empty");
			return;
		}

		Node currNode = head;
		while (currNode != null) {

			System.out.print(currNode.data + "-<");
			currNode = currNode.next;
		}

		System.out.println("null");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		LL2 list = new LL2();

		list.addFirst(2);
		list.addFirst(3);
		list.addFirst(5);
		list.printList();
		list.addLast(45);
		list.addLast(55);
		list.addLast(75);
		list.printList();
		list.reverseList();
		list.removeFirst();
		list.printList();
		list.removeLast();
		list.sortList();
		list.printList();

		list.insertAfter(list.head.next, 5);
		list.printList();
		System.out.println("\nAfter deleting an element: ");
		list.deleteNode(3);
		list.printList();

	}

}
