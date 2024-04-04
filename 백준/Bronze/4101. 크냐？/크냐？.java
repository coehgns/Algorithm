import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while(true) {
            int n = input.nextInt();
            int n2 = input.nextInt();

            if(n == 0 && n2 == 0) {
                break;
            }

            if(n > n2) {
                System.out.println("Yes");
            }
            else {
                System.out.println("No");
            }

        }
    }
}
