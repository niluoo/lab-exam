import java.util Scanner;

class Transpose {
  public static void main(String args[]) {
    System.out.print("Enter row & col size: ");
    Scanner read = new Scanner(System.in);
    int r = read.nextInt();
    int c = read.nextInt();
    
    int a[][] = new int[r][c];
    int t[][] = new int[c][r];
    
    System.out.println("Enter the elements: ");
    for(int i = 0; i < r; ++i) {
      for(int j = 0; j < c; ++j) {
        a[i][j] = read.nextInt();
        t[j][i] = a[i][j];
      }
    }

    System.out.println("Transpose Matrix: ");
    for(int i = 0; i < c; ++i) {
      for(int j = 0; j < r; ++j) {
        System.out.print(t[i][j] + " ");
      }
      System.out.println();
    }
  }
}
