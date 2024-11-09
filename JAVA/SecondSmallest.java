import java.util.Scanner;

class SecondSmallest {
  public static void main(String args[]) {
    System.out.print("Enter number of elements: ");
    Scanner read = new Scanner(System.in);
    int n = read.nextInt();

    System.out.print("Enter the elements: ");
    int a[] = new int[n];
    for(int i = 0; i < n; ++i) {
      a[i] = read.nextInt();
    }

    // bubble sort
    for(int i = 0; i < n; ++i) {
      for(int j = i+1; j < n; ++j) {
        if(a[i] > a[j]) {
          // swap both
          int tmp = a[i];
          a[i] = a[j];
          a[j] = tmp;
        }
      }
    }

    // second smallest - a[1]
    // second largest - a[n-2]
    System.out.println("Second smallest element: " + a[1]);
  }
}
