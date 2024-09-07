
import java.util.*;
import java.io.*;

class Codechef{
  static int gcd(int a, int b){
        if(b==0)return a;
        return gcd(b,a%b);
  }
  static int lcm(int a, int b){
        return (a*b)/gcd(a,b);
  }
 
  public static void main(String[] args) {
        try {
            FastReader in=new FastReader();
            FastWriter out = new FastWriter();
            int testCases=in.nextInt();
            while(testCases-- > 0){
                // write code here
                int n=in.nextInt();
            	String s=in.next();
            	String t=in.next();
            	String u=in.next();
            	int arr[]=new int[n];
            	String str="";
            	for(int i=0;i<n;i++){
            	    str+=(char)((int)u.charAt(i)+(int)t.charAt(i)-(int)s.charAt(i))%26;
            	    // arr[i]=(int)t.charAt(i)-(int)s.charAt(i);
            	    // str+=(char)((int)u.charAt(i)+(arr[i]))%123;
            	}
            	out.println(str);
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