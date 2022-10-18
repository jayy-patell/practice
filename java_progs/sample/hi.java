class C {
	
	static int i;
	static int j;
	
	// C (int x , int y) {
	// 	C.i = x;
	// 	C.j = y;
	// 	System.out.println(i);
	// 	System.out.println(j);
	// }

    void set (int x, int y){
        i=x;
        j=y;
        System.out.println(i);
 	    System.out.println(j);
    }
	
}

class D extends C{
	
	// D(int x, int y) {
    //     super(x, y);
    // }
    
    int total;
    // D(int total, int x, int y){
    //     super(x,y);
    //     this.total = total;
    // }

    void display(){
        System.out.println(C.i);
 	    System.out.println(C.j);
    }
	
	void sum() {
		total = i + j;
		System.out.println(total);
	}
	
}
public class hi {
	
	public static void main(String args[]) {
		
		C c = new C();
		D d =new D();
		
		c.set(5,3);
		d.sum();
        d.display();
		// System.out.println(d.total);
		
	}

}