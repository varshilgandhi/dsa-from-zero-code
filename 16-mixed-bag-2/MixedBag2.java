// DSA from Zero #16 - Mixed bag #2 (answers on small examples).   javac MixedBag2.java && java MixedBag2
import java.util.HashSet;
import java.util.Set;

public class MixedBag2 {
    public static void main(String[] args) {
        Set<Integer> seen = new HashSet<>();                                   // Q1 hashing
        for (int x : new int[]{8, 3, 11, 5}) { if (seen.contains(16 - x)) { System.out.println((16 - x) + " " + x); break; } seen.add(x); }   // 11 5
        int[] b = {1, 4, 6, 9, 12}; int l = 0, r = b.length - 1;              // Q2 two pointers
        while (l < r) { int s = b[l] + b[r]; if (s == 15) { System.out.println(b[l] + " " + b[r]); break; } if (s < 15) l++; else r--; }   // 6 9
        int[] c = {2, 9, 4, 7, 1, 8, 6, 3}; int w = 0;                         // Q3 fixed window
        for (int i = 0; i < 7; i++) w += c[i];
        int best = w;
        for (int i = 7; i < c.length; i++) { w += c[i] - c[i - 7]; best = Math.max(best, w); }
        System.out.println(best);                                              // 38
        int[] d = {5, 3, 8, 2, 6, 4}; int[] P = new int[d.length + 1];         // Q4 prefix sums
        for (int i = 0; i < d.length; i++) P[i + 1] = P[i] + d[i];
        System.out.println((P[4] - P[1]) + " " + (P[6] - P[0]));               // 13 28
        String s = "CAKEBAKE"; Set<Character> in = new HashSet<>(); int left = 0, longest = 0;   // Q5 window
        for (int right = 0; right < s.length(); right++) { while (in.contains(s.charAt(right))) in.remove(s.charAt(left++)); in.add(s.charAt(right)); longest = Math.max(longest, right - left + 1); }
        System.out.println(longest);                                           // 5
    }
}
