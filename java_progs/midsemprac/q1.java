import java.util.Scanner;
import java.util.GregorianCalendar;
import java.util.Calendar;

class Complaint{
    String subject;
    GregorianCalendar DOC;
    int id;
    static int temp = 108;
    
    Complaint(String subject,int d,int m,int y){
        this.subject = subject;
        DOC = new GregorianCalendar(y,m,d);
        this.id = temp++;
    }

    void display(){
        System.out.println("\nComplaintID: "+id+"\nType of Complaint: "+subject+"\nDate of complaint: "+DOC.get(Calendar.DATE)+"/"+DOC.get(Calendar.MONTH)+"/"+DOC.get(Calendar.YEAR));
    }

    static void sortBySubject(Complaint c[], String what){
        for(int i=0;i<c.length;i++){
            if(c[i].subject.equals(what)){   //cannot use == operator
                c[i].display();
            }
        }
    }

    static void sortByDate(Complaint c[]){
        for(int i=0;i<c.length;i++){
            for(int j=0;j<c.length-i-1;j++){
                if(c[j].DOC.get(Calendar.YEAR) > c[j+1].DOC.get(Calendar.YEAR)){
                    Complaint temp;
                    temp = c[j];
                    c[j] = c[j+1];
                    c[j+1] = temp;
                }else if(c[j].DOC.get(Calendar.YEAR) == c[j+1].DOC.get(Calendar.YEAR)){
                    if(c[j].DOC.get(Calendar.MONTH) > c[j+1].DOC.get(Calendar.MONTH)){
                        Complaint temp;
                        temp = c[j];
                        c[j] = c[j+1];
                        c[j+1] = temp;
                    }
                }
            }
            
        }
    }

}

class q1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Regester your complaints here...");
        System.out.println("Enter number of complaints: ");
        int num = sc.nextInt();
        Complaint c[] = new Complaint[num];

        for(int i=0;i<num;i++){
            System.out.println("Enter subject of complaint no."+(i+1)+": ");
            String subject = sc.next();
            System.out.println("Enter date of complaint: ");
            int d = sc.nextInt();
            System.out.println("Enter month of complaint: ");
            int m = sc.nextInt();
            System.out.println("Enter year of complaint: ");
            int y = sc.nextInt();

            c[i] = new Complaint(subject,d,m,y);
        }

        int input;
        do{
            System.out.println("1.DisplayAllComplaints\n2.SortByDate\n3.SortBySubject\n4.Exit");
            System.out.println("What to do??");
            input = sc.nextInt();

            switch(input){
                case 1:{
                    for(int i=0;i<num;i++){
                        c[i].display();
                    }
                    break;
                }
                case 2:{
                    Complaint.sortByDate(c);
                    break;
                }
                case 3:{
                    String what;
                    System.out.println("Filter by what subject:");
                    what=sc.next();
                    System.out.println(what);
                    Complaint.sortBySubject(c,what);
                    break;
                }
                case 4:{
                    System.out.println("ByeBye");
                    break;
                }
            }
        }while(input!=4);
        sc.close();
    }
}






/*
 complaint-subject,id,date
 display
 sort using date
 sort using subject
*/
