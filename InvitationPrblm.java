public class InvitationPrblm{
  static int count(int n){
    if(n<=2)return n;
    return count(n-1)+(n-1)*count(n-2);
  }
  public static void main(String args[]){
    System.out.println(count(4));
  }
}