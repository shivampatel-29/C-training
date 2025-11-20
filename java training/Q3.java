interface A{
      void login();
}
interface B{
      void login();
}
class C implements A,B{
    @Override
    public void login(){
        System.out.println("httt jaa saamne se");
    }
}
public class Q3{
    public static void main(String[] args){
        C n1=new C();
        n1.login();
    }
}