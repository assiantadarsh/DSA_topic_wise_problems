// # Monkey and Doors Problem

// There are `N` doors in a row, and initially all the doors are closed.

// A monkey performs `N` rounds of operations:

// * In the 1st round, the monkey toggles every door.
// * In the 2nd round, the monkey toggles every 2nd door.
// * In the 3rd round, the monkey toggles every 3rd door.
// * In the `i-th` round, the monkey toggles every `i-th` door.

// A toggle means that a closed door becomes open and an open door becomes closed.

// After completing all `N` rounds, determine the **number of doors that remain open**.



import java.util.Scanner;
class Main {
    public static void main(String[] args) {

      Scanner sc = new Scanner(System.in);

      System.out.print("Enter n : ");

      int n = sc.nextInt();

      int count = 0;
      boolean door[] = new boolean[n + 1];

      for(int i = 1; i <= n; i++){
        for(int j = i ; j <= n; j +=i){
          if(door[j]){
            door[j] = false;
          }
          else{
            door[j] = true;
          }
        }
      }

      for(int i = 1; i <=n; i++){
        if(door[i]){
          count++;
        }
      }

      System.out.print("Maximum count  : "+count);
      sc.close();
    }
}
