import java.util.*;

class Tokenizer {
  public static void main(String args[]) {
    Scanner read = new Scanner(System.in);
    System.out.println("Enter integers: ");
    String s = read.nextLine();
   
    int sum = 0;
    
    StringTokenizer st = new StringTokenizer(s, " ");
    while(st.hasMoreTokens()) {
      String tmp = st.nextToken();
      int n = Integer.parseInt(tmp);
      System.out.println(n);
      sum += n;
    }
   
    System.out.println("Sum of integers: " + sum);
  }
}
