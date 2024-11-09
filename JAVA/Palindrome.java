import java.util.Scanner;

class Palindrome {
  public static void main(String args[]) {
    System.out.print("Enter a string: ");
    Scanner read = new Scanner(System.in);
    String str = read.nextLine();

    String rev = "";
    int len = str.length();
    for(int i = len-1; i >= 0; --i) {
      rev = rev + str.charAt(i);
    }

    if(str.equals(rev)) {
      System.out.println(str + " is palindrome");
    }
    else {
      System.out.println(str + " is not palindrome");
    }
  }
}
