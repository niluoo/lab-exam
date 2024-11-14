class Callme {
  synchronized void call(String msg) {
    System.out.print("[" + msg);
    try {
      Thread.sleep(1000);
    }
    catch(InterrupedException e) {
      System.out.println("Interrupted");
    }
    System.out.println("]");
}

class Caller extends Thread {
  String msg;
  Callme target;
  public Caller(Callme targ, String s) {
    target = targ;
    msg = s;
  }
  public void run() {
    target.call(msg);
  }
}

class Sync {
  public static void main(String args[]) {
    Callme d = new Callme();
    Caller t1 = new Caller(d, "Hello");
    Caller t2 = new Caller(d, "World");
    t1.start();
    t2.start();
  }
}
