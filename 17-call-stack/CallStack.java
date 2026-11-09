// DSA from Zero #17 - the call stack.   javac CallStack.java && java CallStack
public class CallStack {
    static void c() { System.out.println("c"); }
    static void b() { System.out.println("b starts"); c(); System.out.println("b ends"); }
    static void a() { System.out.println("a starts"); b(); System.out.println("a ends"); }
    public static void main(String[] args) {
        a();   // a starts / b starts / c / b ends / a ends
    }
}
