class Football() {
  protected void finalize() {
    System.out.println("Obj Destroyed!");
  }
  Football() {
    System.out.println("Obj Created!");
  }
}

class Garbage {
  public static void main(String args[]) {
    
    // anonymous object
    new Football(); 

    // assigning reference to another
    // Football one = new Football();
    // Football two = new Football();
    // one = two;

    // nullyfying reference
    // one = null;

    System.gc();
  }
}
