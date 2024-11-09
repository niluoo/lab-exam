import java.util.Scanner;

class MatrixMul {
  public static void main(String args[]) {
    Scanner read = new Scanner(System.in);
    
    System.out.print("Enter row & col of matrix 1: ");
    int r1 = read.nextInt();
    int c1 = read.nextInt();

    System.out.print("Enter row & col of matrix 2: ");
    int r2 = read.nextInt();
    int c2 = read.nextInt();

    
    // (r1, c1) x (r2, c2)
    if(c1 != r2) {
      System.out.println("Matrix multiplication not possible!");
    }
    else {
      int a[][] = new int[r1][c1];
      System.out.println("Enter elements of matrix 1: ");
      for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c1; ++j) {
          a[i][j] = read.nextInt();
        }
      }

      System.out.println();
      
      int b[][] = new int[r2][c2];
      System.out.println("Enter elements of matrix 2: ");
      for(int i = 0; i < r2; ++i) {
        for(int j = 0; j < c2; ++j) {
          b[i][j] = read.nextInt();
        }
      }

      System.out.println();

      int m[][] = new int[r1][c2];
      for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
          m[i][j] = 0;
        }
      }

      for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
          for(int k = 0; k < c1; ++k) {
            m[i][j] += a[i][k] * b[k][j];
          }
        }
      }

      for(int i = 0; i < r1; ++i) {
        for(int j = 0; j < c2; ++j) {
          System.out.print(m[i][j] + " ");
        }
        System.out.println();
      }
    }
  }
}
