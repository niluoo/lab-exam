import java.util.*;

class Exception {
  public static void main(String args[]) {
    try {
      System.out.print("Enter two numbers: ");
      Scanner read = new Scanner(System.in);
      int a = read.nextInt();
      int b = read.nextInt();
      int c = a / b;
      System.out.println(c);
    }
    catch(ArithmeticException e) {
      System.out.println(e.getMessage());
    }
    finally {
      System.out.println("Execution done!");
    }
  }
}
