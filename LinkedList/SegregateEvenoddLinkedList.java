
public class SegregateEvenoddLinkedList {
	
	Node head;
	
	class Node{
		
		int data;
		Node next;
		Node(int data){
			
			this.data=data;
			this.next=null;
		}
	}
	
	/// add element in first
public void addFirst(int data) {
		
		Node newNode=new Node(data);
		
		if(head==null) {
			head=newNode;
			return;
		}
		
		newNode.next=head;
		head=newNode;
	}

	public Node segregateEvenOdd(Node head) {
		
		if(head==null || head.next==null) {
			return head;
		}
			
		Node even=new Node(-1);
		Node odd=new Node(-1);
		Node evenTail=even,oddTail=odd,curr=head;
	
		
		while(curr!=null) {
			
			if(curr.data%2!=0) {
				oddTail.next=curr;
				oddTail=oddTail.next;
			}
			else {
				evenTail.next=curr;
				evenTail=evenTail.next;
			}
			
			curr=curr.next;
		}
		evenTail.next=odd.next;
		oddTail.next=null;
		return even.next;
	
	}
	
/// print list

	public void printList() {
		
		if(head==null) {
			System.out.println("list is empty");
			return;
		}
			
			Node currNode=head;
			while(currNode!=null) {
				
				System.out.print(currNode.data+"-<");
				currNode=currNode.next;
			}
			
			System.out.println("null");
		}
	
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SegregateEvenoddLinkedList list=new SegregateEvenoddLinkedList();
		
		list.addFirst(7);
		list.addFirst(6);
		list.addFirst(5);
		list.addFirst(4);
		list.addFirst(3);
		list.addFirst(2);
		///list.addFirst(1);
		
	
		list.segregateEvenOdd(list.head);
		list.printList();
		
	
	}

}


	