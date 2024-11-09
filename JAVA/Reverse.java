import java.util.Scanner;

class Reverse {
  public static void main(String args[]) {
    System.out.print("Enter a string: ");
    Scanner read = new Scanner(System.in);
    String str = read.nextLine();
    String rev = "";
    int len = str.length();
    for(int i = len-1; i >= 0; --i) {
      rev = rev + str.chatAt(i);
    }
    System.out.println("Reverse: " + rev);
  }
}
