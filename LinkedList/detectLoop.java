class detectLoop {

    Node head;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
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

    static int countNodes(Node n) {
        int res = 1;
        Node temp = n;
        while (temp.next != n) {
            res++;
            temp = temp.next;
        }
        return res;
    }

    /// detect cycle in the linkList

    public boolean hasCycle(Node head) {

        if (head == null) {
            return false;
        }
        Node hair = head;
        Node turtle = head;

        while (hair.next != null && hair.next.next != null) {

            hair = hair.next.next;
            turtle = turtle.next;

            if (hair == turtle) {
                countNodes(turtle);
                return true;
            }
        }

        return false;
    }

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

        detectLoop list = new detectLoop();

        list.addFirst(2);
        list.addFirst(3);
        list.addFirst(5);
        list.printList();
        list.addFirst(45);
        list.addFirst(55);
        list.addFirst(75);
        list.printList();

    }

}
