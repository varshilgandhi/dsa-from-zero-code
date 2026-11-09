// DSA from Zero #14 - binary search on the answer.   javac SearchAnswer.java && java SearchAnswer
public class SearchAnswer {
    static int daysNeeded(int[] pages, int x) {
        int days = 1, today = 0;
        for (int p : pages) {
            if (today + p > x) { days++; today = 0; }
            today += p;
        }
        return days;
    }
    static int leastPerDay(int[] pages, int D) {
        int lo = 0, hi = 0;
        for (int p : pages) { lo = Math.max(lo, p); hi += p; }
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (daysNeeded(pages, mid) <= D) hi = mid; else lo = mid + 1;
        }
        return lo;
    }
    public static void main(String[] args) {
        System.out.println(leastPerDay(new int[]{10, 20, 30, 40}, 2));   // 60
        System.out.println(leastPerDay(new int[]{20, 10, 30, 10}, 2));   // 40
    }
}
