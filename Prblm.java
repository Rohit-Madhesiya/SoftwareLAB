
import java.util.*;
import java.io.*;


class Prblm{
  static int gcd(int a, int b){
        if(b==0)return a;
        return gcd(b,a%b);
  }
  static int lcm(int a, int b){
        return (a*b)/gcd(a,b);
  }
    // static boolean isSame(String str){
    //     String cf="codechef";
    //     for(int i=0;i<str.length();i++){
    //         if(str.charAt(i)==cf.charAt(i))
    //             return true;
    //     }
    //     return false;
    // }
  static int getMax(int[] count){
    int max=0;
    char ch;
    for(int i=0;i<26;i++){
      if(count[i]>max){
        max=count[i];
        ch=(char)((int)'a'+i);
      }
    }
    return ch;
  }
  static String rearrange(Stirng s){
    int n=s.length();
    if(n==0)return "";
    int count[]=new int[26];
    for(char ch:s.toCharArray(){
      count[(int)ch-(int)'a']++;
    }
    char ch_max=getMax(count);
    int maxCount=count[(int)ch_max-(int)'a'];
    if(maxCount>(n+1)/2)
      return "";
    String res="";
    for(int i=0;i<n;i++)
        res+=' ';
    int ind=0;
    while(maxCount>0){
      res=res.substring(0,ind)+ch_max+res.substring(ind+1);
      ind+=2;
      maxCount--;
    }
    count[(int)ch_max-(int)'a']=0;

    for(int i=0;i<26;i++){
      while(count[i]>0){
        ind (ind>=n)?1:ind;
        res=res.substring(0,ind)+(char)((int)'a'+i)+res.substring(ind+1);
        ind+=2;
        count[i]--;
      }
    }
    return res;
  }
  public static void main(String[] args) {
        try {
            FastReader in=new FastReader();
            FastWriter out = new FastWriter();
            int testCases=in.nextInt();
            while(testCases-- > 0){
                // write code here
            	String str=in.next();
            	out.println(rearrange(str));
            }
            out.close();
        } catch (Exception e) {
            return;
        }
   }
    static class FastReader{
        BufferedReader br;
        StringTokenizer st;
        public FastReader(){
            br=new BufferedReader(new InputStreamReader(System.in));
        }
        String next(){
            while(st==null || !st.hasMoreTokens()){
                try {
                    st=new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt(){
            return Integer.parseInt(next());
        }
        long nextLong(){
            return Long.parseLong(next());
        }
        double nextDouble(){
            return Double.parseDouble(next());
        }
        String nextLine(){
            String str="";
            try {
                str=br.readLine().trim();
            } catch (Exception e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    static class FastWriter {
		private final BufferedWriter bw;

		public FastWriter() {
			this.bw = new BufferedWriter(new OutputStreamWriter(System.out));
		}

		public void print(Object object) throws IOException {
			bw.append("" + object);
		}

		public void println(Object object) throws IOException {
			print(object);
			bw.append("\n");
		}

		public void close() throws IOException {
			bw.close();
		}
	}
}