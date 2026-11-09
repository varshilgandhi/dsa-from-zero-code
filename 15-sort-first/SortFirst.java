// DSA from Zero #15 - sort first.   javac SortFirst.java && java SortFirst
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SortFirst {
    static boolean isAnagram(String a, String b) {
        char[] x = a.toCharArray(), y = b.toCharArray();
        Arrays.sort(x); Arrays.sort(y);
        return Arrays.equals(x, y);
    }
    static String merge(int[][] m) {
        Arrays.sort(m, (p, q) -> Integer.compare(p[0], q[0]));   // by start time
        List<int[]> out = new ArrayList<>();
        for (int[] cur : m) {
            if (!out.isEmpty() && cur[0] <= out.get(out.size() - 1)[1])
                out.get(out.size() - 1)[1] = Math.max(out.get(out.size() - 1)[1], cur[1]);
            else out.add(new int[]{cur[0], cur[1]});
        }
        StringBuilder sb = new StringBuilder();
        for (int[] o : out) sb.append(o[0]).append("-").append(o[1]).append(" ");
        return sb.toString().trim();
    }
    public static void main(String[] args) {
        System.out.println(isAnagram("listen", "silent"));                               // true
        System.out.println(merge(new int[][]{{1, 3}, {8, 10}, {2, 6}, {15, 18}}));       // 1-6 8-10 15-18
        System.out.println(merge(new int[][]{{4, 6}, {1, 2}, {5, 8}, {10, 12}}));        // 1-2 4-8 10-12
    }
}
