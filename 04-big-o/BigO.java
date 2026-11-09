// DSA from Zero #4 - count steps, not seconds.   javac BigO.java && java BigO
public class BigO {
    static long oneByOne(int[] a, int target) {                 // O(n)
        long steps = 0;
        for (int x : a) { steps++; if (x == target) break; }
        return steps;
    }

    static long binarySearch(int[] a, int target) {             // O(log n), a sorted
        int lo = 0, hi = a.length - 1; long steps = 0;
        while (lo <= hi) {
            steps++;
            int mid = (lo + hi) / 2;
            if (a[mid] == target) break;
            if (a[mid] < target) lo = mid + 1; else hi = mid - 1;
        }
        return steps;
    }

    static long everyPair(int[] a) {                            // O(n^2)
        long steps = 0;
        for (int x : a) for (int y : a) steps++;
        return steps;
    }

    public static void main(String[] args) {
        for (int n : new int[]{8, 1000, 1000000}) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = i;
            String pairs = n <= 1000 ? String.valueOf(everyPair(a)) : "too slow to run";
            System.out.println(n + " " + oneByOne(a, n) + " " + binarySearch(a, n) + " " + pairs);
        }
        // 8 8 4 64
        // 1000 1000 10 1000000
        // 1000000 1000000 20 too slow to run
    }
}
