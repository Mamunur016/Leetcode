
public class removeNthFromEnd {
	Node head;
	
	
	class Node{
		int data;
		Node next;
		
		Node(int data){
			this.data=data;
			this.next=null;
			
		}
	}
	
	public void addFirst(int data) {
		Node newNode=new Node(data);
		
		if(head==null) {
			head=newNode;
			return;
		}
		
		newNode.next=head;
		head=newNode;
	}
	
	// print the all element in the list
		public void printList() {
			
			if (head==null) {
				System.out.println("list is empty");
				return;
			}
			Node currNode=head;
			
			while(currNode != null) {
				System.out.print(currNode.data+"->");
				currNode=currNode.next;
			}
			System.out.println("Null");
		}
		
		/// remove from n'th element
		public void removeNthFromEndFunc(int n) {
			 if(head.next==null){
		            return ;
		        }
		        
		        Node curr=head;
		        int size=0;
		        
		        while(curr!=null){
		            curr=curr.next;
		            ++size;
		        }
		        
		        if(size==n){
		           
		           head= head.next;
		           return ;
		        }
		       
		        int indexToSearch=size-n;
		        
		         // System.out.println(indexToSearch);
		         // System.out.println(size);
		        
		        Node prev=head;
		        int i=1;
		        
		        while(i<indexToSearch){
		            
		            prev=prev.next;
		            ++i;
		        }
		        prev.next=prev.next.next;
		        
		      
		}
		
	public static void main(String[] args) {
		// TODO Auto-generated method stub
			removeNthFromEnd list=new removeNthFromEnd();
		
		list.addFirst(5);
		list.addFirst(4);
		list.addFirst(3);
		list.addFirst(2);
		list.addFirst(1);
		list.removeNthFromEndFunc(2);
		list.printList();
	}

}
