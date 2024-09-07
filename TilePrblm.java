public class TilePrblm{
  static int countTileWays(int n, int m){
    if(n==m)return 2;
    if(n==1||n<m)return 1;
    return countTileWays(n-1,m)+countTileWays(n-m,m);
  }
  public static void main(String args[]){
    System.out.println(countTileWays(7,4));
  }
}