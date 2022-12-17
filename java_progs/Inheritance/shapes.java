package Inheritance;

class TwoDShape{
    // Private members are not inherited
    private double height;
    private double width;

    // A default constructor.
    TwoDShape() {
        width = height = 0.0;
    }
    // Parameterized constructor.
    TwoDShape(double w, double h) {
        width = w; height = h;
    }
    // Construct object with equal width and height.
    TwoDShape(double x) {
        width = height = x;
    }

    // Accessor methods for width and height.
    double getWidth() { return width; }
    double getHeight() { return height;}
    // void setWidth(double w) { width = w; }
    // void setHeight(double h) { height = h; }
    void showDim(){
        System.out.println("Width and height are: "+width+"and"+height);
    }
}

class Triangle extends TwoDShape{
    String style;
    // A default constructor.
    Triangle() {
        /*
        even if super() was not mentioned it will be called implicitly given that there is only default constructor in parent class
        if there is a parametrized constructor in parent class then super()/super(x,y) has to be explicitly called.
        So the constructor call heirarchy is from parent to child.
        */
        super();
        style = "none";
    }
    // Constructor
    Triangle(String s, double w, double h) {
        super(w, h); // call superclass constructor
        style = s;
    }
    // One argument constructor.
    Triangle(double x) {
        super(x); // call superclass constructor
        style = "filled";
    }

    // Triangle(String s, double w, double h) {
    //     setWidth(w);
    //     setHeight(h);
    //     style = s;
    // }

    double area(){
        return (getWidth()*getHeight())/2;
    }
    void showStyle(){
        System.out.println("Triangle is "+style);
    }
}

class ColorTriangle extends Triangle {
    private String color;
    ColorTriangle(String c, String s, double w, double h) {
        super(s, w, h);
        color = c;
    }
    String getColor() { return color; }
    void showColor() {
        System.out.println("Color is " + color);
    }
}

class Rectangle extends TwoDShape{
    boolean isSquare(){
        if(getWidth()==getHeight())
            return true;
        return false;
    }
    double area(){
        return getWidth()*getHeight();
    }
}

class shapes{
    public static void main(String[] args) {
        ColorTriangle c1 = new ColorTriangle("Blue", "outlined", 8.0, 12.0);
        ColorTriangle c2 = new ColorTriangle("Red", "filled", 2.0, 2.0);

        // Triangle t1 = new Triangle("filled", 4.0, 4.0);
        // Triangle t2 = new Triangle("outlined", 8.0, 12.0);

        Triangle t1 = new Triangle();
        Triangle t2 = new Triangle("outlined", 8.0, 12.0);
        Triangle t3 = new Triangle(4.0);
        t1=t2;

        //t1.setWidth(4.0); t1.setHeight(4.0); t1.style="filled";
        //t2.setWidth(8.0); t2.setHeight(12.0); t2.style="outline";
        System.out.println("Info for c1: ");
        c1.showStyle(); c1.showDim(); c2.showColor();
        System.out.println("Area is " + c1.area());

        System.out.println("Info of t1:");
        t1.showStyle();t1.showDim();
        System.out.println("Area is: "+t1.area());
        System.out.println("Info of t2:");
        t2.showStyle();t2.showDim();
        System.out.println("Area is: "+t2.area());
        System.out.println("Info for t3: ");
        t3.showStyle(); t3.showDim();
        System.out.println("Area is " + t3.area());
    }
}