class Simple{
  void method(){
    System.out.println("Hello Java");
  }
}
public class NewInstance{
  public static void main(String arg[]){
    try{
    Class c =Class.forName("Simple");
    // Simple s=(Simple)c.newInstance();
    // s.method();
    }catch(Exception e){
      
    }
  }
}