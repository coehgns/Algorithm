import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<Integer>();
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int count = 1;
        int top = 0;

        for(int i = 0; i < n; i++) {
           stack.push(input.nextInt());
        }
        
        top = stack.pop(); // 스택의 가장 위의 값으로 top을 설정
        
        while (!stack.empty()){
            int current = stack.pop();
            if(top < current) {
                count++;
                top = current; // 현재 값을 top으로 설정
            }
        }
        System.out.print(count);
    }
}
