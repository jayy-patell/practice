package Interface_Package;

class ByTwos implements Series {
	//Implements interface
   int start;
   int val;
   
   ByTwos() {
   start = 0;
   val = 0;
   }
   public void setStart(int x) {
   start = x;
   val = x;
   }
   public int getNext() {
   val += 2;
   return val;
   }
   public void reset() {
   val = start;
   }
}

class ByThrees implements Series {
	//Implements interface
   int start;
   int val;
   
   ByThrees() {
   start = 0;
   val = 0;
   }
   public void setStart(int x) {
   start = x;
   val = x;
   }
   public int getNext() {
   val += 3;
   return val;
   }
   public void reset() {
   val = start;
   }
}

public class InterfaceRef {

    public static void main(String[] args) {
     ByTwos ob2 = new ByTwos();
     ByThrees ob3 = new ByThrees();
     
     Series iRef; //Interface Reference
     
    System.out.println("Series.....");
    
    for(int i = 0; i<5; i++){
    iRef = ob2;    //Refers to ByTwos object
    System.out.println("ByTwos Next value: "+ iRef.getNext());
    iRef = ob3;   //Refers to ByThrees object
    System.out.println("ByThrees Next value: "+ iRef.getNext());
    }
    }
}