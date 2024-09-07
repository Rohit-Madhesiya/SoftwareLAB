interface Math<T extends Number>{
  public T add(T a,T b);
}
class Mathematics implements Math<Integer>{
  public Integer add(Integer a,Integer b){return a+b;}
}
@SuppressWarnings("unchecked")
public class GenericEx{
  
  public static void main(String args[]){
  Mathematics ob=new Mathematics();
    Integer i=new Integer(2);
    System.out.println(ob.add(i,i));
  }
}