class Odd extends Thread {
  public void run() {
    for(int i = 0; i < 100; ++i) {
      if(i % 2 == 1) {
        System.out.println("Odd: " + i);
      }
    }
  }
}

class Even extends Thread {
  public void run() {
    for(int i = 0; i < 100; ++i) {
      if(i % 2 == 0) {
        System.out.println("Even: " + i);
      }
    }
  }
}

class MultiThreading {
  public static void main(String args[]) {
    Odd o = new Odd();
    o.start();

    Even e = new Even();
    e.start();
  }
}
