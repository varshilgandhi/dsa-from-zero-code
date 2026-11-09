// DSA from Zero #10 - reverse in place, sorted squares.   javac TwoPointers2.java && java TwoPointers2
import java.util.Arrays;

public class TwoPointers2 {
    static int[] sortedSquares(int[] a) {
        int[] out = new int[a.length];
        int l = 0, r = a.length - 1;
        for (int pos = a.length - 1; pos >= 0; pos--) {
            if (Math.abs(a[l]) > Math.abs(a[r])) { out[pos] = a[l] * a[l]; l++; }
            else { out[pos] = a[r] * a[r]; r--; }
        }
        return out;
    }
    public static void main(String[] args) {
        int[] a = {3, 8, 12, 5, 9};
        for (int l = 0, r = a.length - 1; l < r; l++, r--) { int t = a[l]; a[l] = a[r]; a[r] = t; }
        System.out.println(Arrays.toString(a));                                    // [9, 5, 12, 8, 3]
        System.out.println(Arrays.toString(sortedSquares(new int[]{-4, -1, 0, 3, 10})));   // [0, 1, 9, 16, 100]
        System.out.println(Arrays.toString(sortedSquares(new int[]{-7, -3, 2, 3, 11})));   // [4, 9, 9, 49, 121]
    }
}
