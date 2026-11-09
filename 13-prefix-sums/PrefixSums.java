// DSA from Zero #13 - prefix sums.   javac PrefixSums.java && java PrefixSums
import java.util.Arrays;

public class PrefixSums {
    static long[] prefix(int[] a) {
        long[] P = new long[a.length + 1];
        for (int i = 0; i < a.length; i++) P[i + 1] = P[i] + a[i];
        return P;
    }
    public static void main(String[] args) {
        long[] P = prefix(new int[]{5, 3, 8, 2, 6, 4});
        System.out.println(Arrays.toString(P));                 // [0, 5, 8, 16, 18, 24, 28]
        System.out.println((P[4] - P[1]) + " " + (P[6] - P[2]));   // 13 20
        long[] P2 = prefix(new int[]{4, 1, 3, 7, 2});
        System.out.println(P2[4] - P2[1]);                      // 11
    }
}
