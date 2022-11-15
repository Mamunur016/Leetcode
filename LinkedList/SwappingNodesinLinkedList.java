

//Input: 10->15->12->13->20->14,  x = 12, y = 20
//Output: 10->15->20->13->12->14
//
//Input: 10->15->12->13->20->14,  x = 10, y = 20
//Output: 20->15->12->13->10->14
//
//Input: 10->15->12->13->20->14,  x = 12, y = 13
//Output: 10->15->13->12->20->14
public class SwappingNodesinLinkedList {
	
	Node head;
	
	class Node{
		
		int data;
		Node next;
		Node(int data){
			
			this.data=data;
			this.next=next;
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
	
	public void swap(int n,int m) {
		
		if(head==null) {
			return;
		}
		if(n==m) {
			return;
		}
		Node prevNode1=null,prevNode2=null,node1=head,node2=head;
		
		/// search node 1
		
		while(node1!=null && node1.data!=n) {
			prevNode1=node1;
			node1=node1.next;
		}
		
	/// search node 2
		
		while(node2!=null && node2.data!=m) {
			prevNode2=node2;
			node2=node2.next;
		}
		
		
		if(node1!=null && node2!=null) {
			
			if(prevNode1!=null) {
				prevNode1.next=node2;
			}
			else {
				head=node2;
			}
			
			/// for node 2
			
			if(prevNode2!=null) {
				prevNode2.next=node1;
			}
			else {
				head=node1;
			}
			
			/// swap the next pointer
			
			Node tmp=node1.next;
			node1.next=node2.next;
			node2.next=tmp;
		}
		else {
            System.out.println("Swapping is not possible");
        }
		
		
	}
	
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SwappingNodesinLinkedList list=new SwappingNodesinLinkedList();
		
		list.addFirst(7);
		list.addFirst(6);
		list.addFirst(5);
		list.addFirst(4);
		list.addFirst(3);
		list.addFirst(2);
		list.addFirst(1);
		
		list.printList();
		
		list.swap(2,5);
		System.out.println("List after swapping nodes: ");
		list.printList();
		
	
	}

}
