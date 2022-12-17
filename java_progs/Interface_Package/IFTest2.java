package Interface_Package;

// Implement a "growable" stack.
class DynStack implements IntStack 
{
// all the variables and methods are same except push
   // Push an item onto the stack
  public void push(int item) 
  {
// if stack is full, allocate a larger stack
if(isFull())
 {
int temp[] = new int[stck.length * 2]; // double size
for(int i=0; i<stck.length; i++)   temp[i] = stck[i];
stck = temp;
stck[++tos] = item;
}
else
        stck[++tos] = item;
   }
}

class IFTest2 
{
public static void main(String args[]) 
{
DynStack mystack1 = new DynStack(5);
 
// these loops cause each stack to grow
for(int i=0; i<12; i++) mystack1.push(i);
 
 System.out.println("Stack in mystack1:");
for(int i=0; i<12; i++)
   System.out.println(mystack1.pop());
 
} }
