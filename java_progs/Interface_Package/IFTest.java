package Interface_Package;

class FixedStack implements IntStack 
{
    private int stck[];
    private int tos;
    // allocate and initialize stack
    FixedStack(int size) {
    stck = new int[size];
    tos = -1;
    }
    public boolean isFull(){  return(tos==stck.length-1);}
    public boolean isEmpty(){  return(tos==-1);}

    public void push(int item){
        if (isFull())  
            System.out.println("Stack is full.");
        else
            stck[++tos] = item;
    }
    public int pop(){
        if(isEmpty() ){
            System.out.println("Stack underflow.");
            return -1;
        }else{
            return stck[tos--];
        }
    } 
    void  display(){
        if(isEmpty())
            System.out.println("Empty Stack."); 
        else{
            for (int i=0;i<=tos;i++)
                System.out.println(stck[i]+" ");
        }
            
    }
}


class IFTest {
    public static void main(String args[]) {
    FixedStack mystack1 = new FixedStack(5);
    FixedStack mystack2 = new FixedStack(8);
    // push some numbers onto the stack
    for(int i=0; i<5; i++) mystack1.push(i);
    for(int i=0; i<8; i++) mystack2.push(i);
    // pop those numbers off the stack
    System.out.println("Stack in mystack1:");
    for(int i=0; i<5; i++)
    System.out.println(mystack1.pop());
    System.out.println("Stack in mystack2:");
    for(int i=0; i<8; i++)
    System.out.println(mystack2.pop());
    }
}
