import java.util.Scanner;

class BinarySearch {
  public static void main(String args[]) {
    System.out.print("Enter number of elements: ");
    Scanner read = new Scanner(System.in);
    int n = read.nextInt();

    System.out.print("Enter the elements: ");
    // increasing order 
    int a[] = new int[n];
    for(int i = 0; i < n; ++i) {
      a[i] = read.nextInt();
    }

    System.out.print("Enter the element to be searched:");
    int key = read.nextInt();

    int low = 0, high = n-1;
    while(low <= high) {
      int mid = (low + high) / 2;
      if(a[mid] < key) {
        low = mid + 1;
      }
      else if(a[mid] == key) {
        System.out.println(key + " found at index: " + mid);
        break;
      }
      else {
        high = mid - 1;
      }
    }
    if(low > high) {
      System.out.println(key + " not found!");
    }
  }
}
