// DSA from Zero #7 - Mixed bag #1.   javac MixedBag1.java && java MixedBag1
import java.util.ArrayList;
import java.util.List;

public class MixedBag1 {
    public static void main(String[] args) {
        // Q1: binary search on 10 lakh sorted numbers: at most 20 steps
        int[] a = new int[1000000];
        for (int i = 0; i < a.length; i++) a[i] = i;
        int lo = 0, hi = a.length - 1, steps = 0, target = 765432;
        while (lo <= hi) {
            steps++;
            int mid = (lo + hi) / 2;
            if (a[mid] == target) break;
            if (a[mid] < target) lo = mid + 1; else hi = mid - 1;
        }
        System.out.println(steps <= 20);                    // true

        // Q2: b = a copies the arrow, like Python
        List<Integer> x = new ArrayList<>(List.of(5, 6, 7));
        List<Integer> y = x;
        y.add(8);
        System.out.println(x);                              // [5, 6, 7, 8]

        // Q4: loop inside a loop over 1,000 items
        long count = 0;
        for (int i = 0; i < 1000; i++) for (int j = 0; j < 1000; j++) count++;
        System.out.println(count);                          // 1000000

        // Q5
        String s = "racecar";
        System.out.println(s.charAt(0) + " " + s.charAt(s.length() - 1));   // r r
    }
}
