// DSA from Zero #11 - fixed sliding window.   javac FixedWindow.java && java FixedWindow
public class FixedWindow {
    static String bestK(int[] a, int k) {
        int window = 0;
        for (int i = 0; i < k; i++) window += a[i];
        int best = window, start = 0;
        for (int i = k; i < a.length; i++) {
            window += a[i] - a[i - k];
            if (window > best) { best = window; start = i - k + 1; }
        }
        return best + " from day " + (start + 1);
    }
    public static void main(String[] args) {
        System.out.println(bestK(new int[]{4, 2, 7, 1, 8, 3, 5}, 3));   // 16 from day 3
        System.out.println(bestK(new int[]{3, 9, 2, 6, 5, 1}, 2));      // 12 from day 1
    }
}
