// add your code here :
public class Queue {
    Node first;
    Node last;

    public Queue(){}

    void enqueue(Object item){
        Node t = new Node(item);
        if(first == null && last == null){
            first = last = t;
            t.next = null;
        }
        else {
            last.next = t;
            last = t;
        }
    }

    Object dequeue(){
        if(first != null){
            Object item = first.data;
            first = first.next;
            return item;
        }
        return null;
    }

    void displayAll(){
        while(first != null){
            System.out.println(first.data);
            first = first.next;
        }
    }

    public static void main(String[] args){
        Queue q = new Queue();
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);
        q.enqueue(5);

//        System.out.print(q.dequeue());
//        System.out.print(q.dequeue());

        q.displayAll();

    }
}
class Node {
    Object data;
    Node next;

    public Node(Object item){
        this.data = item;
    }
}
