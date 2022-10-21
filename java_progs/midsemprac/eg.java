import java.util.Scanner;

class Player{
    String name;
    int id;
    int money;
    static int pool;
    static int temp = 1269;

    Player(String name, int money){
        this.name=name;
        this.money=money;
        this.id=temp++;
    }

    void display(){
        if(id!=-1){
            System.out.println("Player Name: "+name);
            System.out.println("Player ID: "+id);
            System.out.println("Player Pocket: "+money);
            System.out.println("Prize Pool: "+pool);
        }
    }

    //void deletePlayer(Player p[],int t){}
}

class eg{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("The game begins...");
        System.out.println("Enter number of players: ");
        int num = sc.nextInt();
        Player p[] = new Player[num];

        for(int i=0;i<num;i++){
            System.out.println("Enter name of player "+(i+1)+": ");
            String name = sc.next();
            System.out.println("Initial money with player "+(i+1)+": ");
            int money = sc.nextInt();

            p[i] = new Player(name, money);
        }

        int input;
        do{
            System.out.println("1.Display Players\n2.Delete Player\n3.Exit");
            System.out.println("Enter what you want to do?? ");
            input=sc.nextInt();

            switch(input){
                case 1:{
                    for(int i=0;i<num;i++){
                        p[i].display();
                    }
                    break;
                }
                case 2:{
                    System.out.println("Enter ID of player you want to eliminate: ");
                    int t = sc.nextInt();
                    
                    int i;
                    for(i=0;i<p.length;i++){
                        if(p[i].id == t){
                            p[i].id=-1;
                            Player.pool += p[i].money;   //static members are accessed by using ClassName.static_member
                            p[i].money = 0;
                            
                            System.gc();
                            break;
                        }
                    }
                    break;
                }
                case 3:{
                    System.out.println("Exiting...");
                    break;
                }
            }
        }while(input!=3);

        sc.close();
    }
}

/*
 int->sc.nextInt()
 double->sc.nextDouble()
 float->sc.nextFloat()
 string->sc.next()
 char->
*/

//when do you make static functions??

