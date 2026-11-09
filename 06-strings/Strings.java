// DSA from Zero #6 - a string is an array of letters.   javac Strings.java && java Strings
// Java strings can't change either: build a new one.
public class Strings {
    // two fingers, both ends inward: O(n). Returns the comparisons, or -comparisons if it is not a palindrome.
    static int palindromeComparisons(String w) {
        int left = 0, right = w.length() - 1, comparisons = 0;
        while (left < right) {
            comparisons++;
            if (w.charAt(left) != w.charAt(right)) return -comparisons;
            left++; right--;
        }
        return comparisons;
    }

    public static void main(String[] args) {
        String s = "NAMAN";
        System.out.println(s.charAt(0) + " " + s.length() + " " + s.charAt(s.length() - 1));   // N 5 N
        String t = "R" + s.substring(1);
        System.out.println(t);                                                                   // RAMAN
        int count = 0;
        for (char ch : s.toCharArray()) if (ch == 'A') count++;
        System.out.println(count);                                                               // 2
        for (String w : new String[]{"NAMAN", "LEVEL", "NAMIT", "racecar"}) {
            int c = palindromeComparisons(w);
            System.out.println(w + " " + (c > 0) + " " + Math.abs(c));
        }
        // NAMAN true 2
        // LEVEL true 2
        // NAMIT false 1
        // racecar true 3
    }
}
