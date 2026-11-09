// DSA from Zero #18 - recursion: a new copy each call.   javac RecursionCopies.java && java RecursionCopies
public class RecursionCopies {
    static void countdown(int n) {
        if (n == 0) { System.out.println("go"); return; }
        System.out.println(n);
        countdown(n - 1);
    }
    static int total(int[] a, int i) {        // total of a[i..]
        if (i == a.length) return 0;
        return a[i] + total(a, i + 1);
    }
    public static void main(String[] args) {
        countdown(3);                                        // 3 2 1 go
        System.out.println(total(new int[]{3, 8, 12}, 0));   // 23
        System.out.println(total(new int[]{5, 1, 4}, 0));    // 10
    }
}
