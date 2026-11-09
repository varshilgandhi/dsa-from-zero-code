// DSA from Zero #19 - base case first.   javac BaseCase.java && java BaseCase
public class BaseCase {
    static long fact(int n) { if (n == 1) return 1; return n * fact(n - 1); }
    static long power(long x, int k) { if (k == 0) return 1; return x * power(x, k - 1); }
    static int digits(int n) { if (n < 10) return n; return n % 10 + digits(n / 10); }
    static long noBase(int n) { return n * noBase(n - 1); }   // no base case
    public static void main(String[] args) {
        System.out.println(fact(4) + " " + power(2, 5) + " " + digits(472));   // 24 32 13
        try { noBase(4); } catch (StackOverflowError e) { System.out.println("StackOverflowError"); }   // StackOverflowError
    }
}
