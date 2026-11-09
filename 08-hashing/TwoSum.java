// DSA from Zero #8 - two sum in one pass with a HashSet.   javac TwoSum.java && java TwoSum
import java.util.HashSet;
import java.util.Set;

public class TwoSum {
    static String twoSum(int[] prices, int target) {
        Set<Integer> seen = new HashSet<>();          // the note
        for (int p : prices) {
            if (seen.contains(target - p)) return (target - p) + " " + p;
            seen.add(p);
        }
        return "none";
    }
    public static void main(String[] args) {
        System.out.println(twoSum(new int[]{30, 55, 20, 70, 45, 80}, 100));   // 30 70
        System.out.println(twoSum(new int[]{40, 25, 60, 75}, 100));           // 40 60
    }
}
