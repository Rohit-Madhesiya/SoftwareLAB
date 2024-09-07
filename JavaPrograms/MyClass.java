import java.lang.reflect.*;
import java.lang.*;
public class MyClass{
  public void method1(){}
  public int metho2(){
    return 1;
  }
  public static void main(String args[]){
    listPublicMethod(MyClass.class);
  }
  public static void listPublicMethod(Class<?> claz){
    System.out.println(claz.getSimpleName());
    Method[] meth=claz.getMethods();
    for(Method m:meth){
      if(m.getModifiers()==Modifier.PUBLIC){
        System.out.println(m.getName());
      }
    }
  }
}