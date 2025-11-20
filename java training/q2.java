interface A{
    abstract void login();
}
class B implements A{
    public void login(){
        System.out.println("hellooooo");
    }
}
public class q2{
    public static void main(String[] args){
        B n1=new B();
        n1.login();
    }
}