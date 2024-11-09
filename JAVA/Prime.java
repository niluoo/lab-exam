import java.util.Scanner;

class Prime {
  public static void main(String args[]) {
    System.out.print("Enter a number: ");
    Scanner read = new Scanner(System.in);
    int n = read.nextInt();
    
    int cnt = 0; // no of divisors
    for(int i = 1; i <= n; ++i) {
      if(n % i == 0) {
        cnt++;
      }
    }

    if(cnt == 2) {
      System.out.println(n + " is prime");
    }
    else {
      System.out.println(n + " is not prime");
    }
  }
}
