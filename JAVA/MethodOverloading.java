class Overload {
  void area(int x) {
    int ans = x * x;
    System.out.println("Area of square: " + ans);
  }
  void area(int l, int b) {
    int ans = l * b;
    System.out.println("Area of rectangle: " + ans);
  }
  void area(double r) {
    double ans = 3.14 * r * r;
    System.out.println("Area of circle: " + ans);
  }
  void area(double b, double h) {
    double ans = 0.5 * b * h;
    System.out.println("Area of triangle: " + ans);
  }
}

class MethodOverloading {
  public static void main(String args[]) {
    Overload o = new Overload();
    o.area(4);
    o.area(3, 4);
    o.area(5.7);
    o.area(3.2, 7.1);
  }
}
