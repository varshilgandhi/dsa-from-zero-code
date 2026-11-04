// DSA from Zero #3 - boxes and arrows in Java.   javac BoxesAndArrows.java && java BoxesAndArrows
// Java arrays work like Python lists: `int[] b = a;` copies the arrow, not the row.
import java.util.Arrays;

public class BoxesAndArrows {
    public static void main(String[] args) {
        int x = 5;
        int y = x;
        x = 10;
        System.out.println(y);                      // 5

        int[] a = {3, 8, 12};
        int[] b = a;                                // one row, two names
        b[0] = 99;
        System.out.println(a[0]);                   // 99

        int[] c = a.clone();                        // a real copy (like Python's a.copy())
        c[0] = 1;
        System.out.println(a[0] + " " + c[0]);      // 99 1

        // Today's task
        int[] t = {1, 2, 3};
        int[] u = t;
        u[1] = 50;
        System.out.println(Arrays.toString(t));     // [1, 50, 3]
    }
}
