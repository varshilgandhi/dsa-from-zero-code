// DSA from Zero #12 - grow-and-shrink window.   javac GrowWindow.java && java GrowWindow
import java.util.HashSet;
import java.util.Set;

public class GrowWindow {
    static int longestNoRepeat(String s) {
        Set<Character> seen = new HashSet<>();
        int left = 0, best = 0;
        for (int right = 0; right < s.length(); right++) {
            while (seen.contains(s.charAt(right))) seen.remove(s.charAt(left++));
            seen.add(s.charAt(right));
            best = Math.max(best, right - left + 1);
        }
        return best;
    }
    public static void main(String[] args) {
        System.out.println(longestNoRepeat("CAKEBAKE"));   // 5
        System.out.println(longestNoRepeat("PAPAYA"));     // 3
    }
}
