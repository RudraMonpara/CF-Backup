import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class hoof{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<Long, Integer> map = new HashMap<>();
        for(int i=0; i<4; i++){
            long s = sc.nextLong();
            map.put(s, map.getOrDefault(s, 0)+1);
        }
        System.out.println(4 - map.size());
        sc.close();
    }
}