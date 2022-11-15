
public class Rearrange {

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
	
	public Node reverse(Node node) {
		if(node==null || node.next==null) {
			
			return node;
		}
		
		Node curr=node.next;
		Node prev=node;
		
		while(curr!=null) {
			Node next=curr.next;
			curr.next=prev;
			
			/// update 
			prev=curr;
			curr=next;
			
		}
		node.next=null;
		node=prev;
		return node;
	}
	
	public void rearrange() {
		Node hair=head;
		Node turtle=head;
		
		while(hair!=null && hair.next!=null) {
			turtle=turtle.next;
			hair=hair.next.next;
		}
		Node node1=head;
		Node node2=turtle.next;
		turtle.next=null;
		
		node2=reverse(node2);
		 head = new Node(0); // Assign dummy Node
		 
	        // curr is the pointer to this dummy Node, which
	        // will be used to form the new list
	        Node curr = head;
	        while (node1 != null || node2 != null) {
	 
	            // First add the element from first list
	            if (node1 != null) {
	                curr.next = node1;
	                curr = curr.next;
	                node1 = node1.next;
	            }
	 
	            // Then add the element from second list
	            if (node2 != null) {
	                curr.next = node2;
	                curr = curr.next;
	                node2 = node2.next;
	            }
	        }
	 
	        // Assign the head of the new list to head pointer
	        head = head.next;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rearrange list=new Rearrange();
		
		list.addFirst(7);
		list.addFirst(6);
		list.addFirst(5);
		list.addFirst(4);
		list.addFirst(3);
		list.addFirst(2);
		list.addFirst(1);
		list.printList();
		list.rearrange();
		list.printList();

	}

}
