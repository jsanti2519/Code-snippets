class Main {
  public static void main(String[] args) {

    String fun = "sample.txt"; //starts off as normal string variable.

    TextFileInput t = new TextFileInput(fun); //this is where everything changes.

    String[] arr = new String[20]; //set up String array to print text file line by line.

    /*
      arr[0] would represent line 1 in sample.txt,
      arr[1] would represent line 2 in sample.txt
      and it continues
      */

    String counter = t.readLine();//reads the first line for lab5input.txt

    int i = 0;

    while(counter != null) {
      arr[i++] = counter;
      counter = t.readLine(); //readLine gets added by 1 by default after being used.
    }
    for(int j = 0; ; j++) {
      if(arr[j] == null) break; //if arr[j] does not have any text left
      else System.out.println(arr[j]);
    }
  }
}
