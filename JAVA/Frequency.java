import java.util.Scanner;

class Frequency {
  public static void main(String args[]) {
    System.out.print("Enter a string: ");
    Scanner read = new Scanner(System.in);
    String s = read.nextLine();

    System.out.print("Enter a letter: ");
    char c = read.next().charAt(0);

    int freq = 0;
    int n = s.length();
    for(int i = 0; i < n; ++i) {
      if(s.charAt(i) == c) {
        freq++;
      }
    }
    System.out.print("Frequency: " + freq);
  }
}
