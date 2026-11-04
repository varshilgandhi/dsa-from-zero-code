// DSA from Zero #1 - binary search on 8 cards.   javac BinarySearch.java && java BinarySearch
public class BinarySearch {
    // Returns {position, flips}. position is -1 if target is not there. cards must be sorted.
    static int[] binarySearch(int[] cards, int target) {
        int lo = 0, hi = cards.length - 1, flips = 0;
        while (lo <= hi) {                  // 4. repeat while something is left
            int mid = lo + (hi - lo) / 2;   // 1. look at the middle (no overflow)
            flips++;
            if (cards[mid] == target) return new int[]{mid, flips};  // 2. compare
            if (cards[mid] < target) lo = mid + 1;                   // 3. throw away the left half
            else hi = mid - 1;                                       // 3. throw away the right half
        }
        return new int[]{-1, flips};
    }

    public static void main(String[] args) {
        int[] cards = {3, 8, 12, 19, 25, 31, 37, 44};
        int[] a = binarySearch(cards, 37); System.out.println(a[0] + " " + a[1]);   // 6 3
        int[] b = binarySearch(cards, 30); System.out.println(b[0] + " " + b[1]);   // -1 3
        int[] yourTurn = {2, 5, 9, 14, 20, 27, 33, 40};
        int[] c = binarySearch(yourTurn, 9); System.out.println(c[0] + " " + c[1]); // 2 3
    }
}
