class a{
    void show(){
        System.out.println("a ka show");
        }
        void x(){
            System.out.println("in x from a");
        }
        void y(){
            System.out.println("in x");
        }
        void z(){
            System.out.println("in z");
        }
    }

    class b extends a{
        void show(){
            System.out.println("b ka show");
        }
        void x(){
            System.out.println("in x from b");
        }
    }

    class all{
        public static void main(String[] args) {
            a ob = new b();
            ob.show();
            ob.z();
        }
    }