import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        for (int i = 0; i < input; i++) {
            String word = sc.next();
            int l = word.length();
            if (l > 10) {
                System.out.println(word.charAt(0) + "" + (l - 2) + word.charAt(l - 1));
            } else {
                System.out.println(word);
            }
        }
        sc.close();
    }
}