// DSA from Zero #5 - arrays: five jobs and their price.   javac ArrayShelf.java && java ArrayShelf
// ArrayList is Java's growable array, the same shelf as a Python list.
import java.util.ArrayList;
import java.util.List;

public class ArrayShelf {
    public static void main(String[] args) {
        List<String> a = new ArrayList<>(List.of("rice", "dal", "sugar", "tea", "oil"));
        System.out.println(a.get(3));                 // tea    O(1)
        System.out.println(a.contains("sugar"));      // true   O(n)
        a.add("salt");                                //        O(1) on average
        a.add(0, "atta");                             //        O(n)
        System.out.println(a);      // [atta, rice, dal, sugar, tea, oil, salt]
        a.remove(2);                                  //        O(n)
        System.out.println(a);      // [atta, rice, sugar, tea, oil, salt]
        a.remove(a.size() - 1);                       //        O(1)
        System.out.println(a);      // [atta, rice, sugar, tea, oil]

        int n = 100000;
        long t0 = System.nanoTime(); List<Integer> b = new ArrayList<>();
        for (int i = 0; i < n; i++) b.add(i);
        long t1 = System.nanoTime(); List<Integer> c = new ArrayList<>();
        for (int i = 0; i < n; i++) c.add(0, i);
        long t2 = System.nanoTime();
        System.out.println("front is slower: " + ((t2 - t1) > (t1 - t0)));   // front is slower: true
    }
}
