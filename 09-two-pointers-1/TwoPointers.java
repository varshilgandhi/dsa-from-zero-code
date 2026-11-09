// DSA from Zero #9 - two pointers, part 1.   javac TwoPointers.java && java TwoPointers
public class TwoPointers {
    static String sortedTwoSum(int[] a, int target) {
        int l = 0, r = a.length - 1;
        while (l < r) {
            int t = a[l] + a[r];
            if (t == target) return a[l] + " " + a[r];
            if (t < target) l++; else r--;
        }
        return "none";
    }
    static int removeRepeats(int[] a) {
        if (a.length == 0) return 0;
        int write = 1;
        for (int read = 1; read < a.length; read++) if (a[read] != a[write - 1]) a[write++] = a[read];
        return write;
    }
    public static void main(String[] args) {
        System.out.println(sortedTwoSum(new int[]{10, 20, 35, 50, 65, 80}, 85));   // 20 65
        int[] a = {1, 1, 2, 3, 3, 3, 4};
        int k = removeRepeats(a);
        StringBuilder sb = new StringBuilder(k + ":");
        for (int i = 0; i < k; i++) sb.append(" ").append(a[i]);
        System.out.println(sb);                                                   // 4: 1 2 3 4
        System.out.println(sortedTwoSum(new int[]{5, 15, 25, 40, 60}, 55));       // 15 40
    }
}
