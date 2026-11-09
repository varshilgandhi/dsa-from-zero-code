# DSA from Zero: code and tracker

Companion repo for the **DSA from Zero** series on YouTube (@learnwithvarshil): data structures and algorithms from
absolute zero to interview ready, in हिंदी with an English audio track. 55 small steps, one episode a week.

- **Tracker:** [tracker/TRACKER.md](tracker/TRACKER.md) (print it, or use [tracker.csv](tracker/tracker.csv) in a spreadsheet).
  One row per episode, with a box for day 3 and day 7: redo the task from memory.
- **Code:** every episode with code has a folder with the same solution in **Python** (on screen in the video),
  **C++** and **Java**. Watch the episode first, do the task on paper, and only then open the code.

| Step | Episode | Code |
|---|---|---|
| 0 | Is DSA dead in 2026? | no code |
| 1 | Your first algorithm: binary search on 8 cards | [01-binary-search](01-binary-search) |
| 2 | Why you quit last time: the 3 traps | no code, start the [tracker](tracker/TRACKER.md) |
| 3 | Boxes and arrows: the `b = a` trap | [03-boxes-and-arrows](03-boxes-and-arrows) (note: C++ copies on `b = a`, Python and Java don't) |
| 4 | Counting steps: Big O without maths | [04-big-o](04-big-o) |
| 5 | Arrays: the kirana shelf | [05-arrays](05-arrays) |
| 6 | Strings are arrays of letters | [06-strings](06-strings) (note: C++ strings can change, Python and Java strings can't) |
| 7 | Mixed bag #1 | [07-mixed-bag-1](07-mixed-bag-1) |
| 8 | Hashing: two sum in one pass | [08-hashing](08-hashing) |
| 9 | Two pointers, part 1 | [09-two-pointers-1](09-two-pointers-1) |
| 10 | Two pointers, part 2: your turn | [10-two-pointers-2](10-two-pointers-2) |
| 11 | Sliding window, fixed size | [11-sliding-window-fixed](11-sliding-window-fixed) |
| 12 | Sliding window, grow and shrink | [12-sliding-window-grow](12-sliding-window-grow) |
| 13 | Prefix sums | [13-prefix-sums](13-prefix-sums) |
| 14 | Binary search on the answer | [14-binary-search-answer](14-binary-search-answer) |
| 15 | Sorting: when to sort first | [15-sort-first](15-sort-first) |
| 16 | Mixed bag #2 | [16-mixed-bag-2](16-mixed-bag-2) |
| 17 | The call stack | [17-call-stack](17-call-stack) |
| 18 | Recursion 1: copies, not loops | [18-recursion-copies](18-recursion-copies) |
| 19 | Recursion 2: base case first | [19-base-case](19-base-case) |

Run:

```bash
python3 01-binary-search/binary_search.py
g++ -std=c++17 01-binary-search/binary_search.cpp -o bs && ./bs
cd 01-binary-search && javac BinarySearch.java && java BinarySearch
```

Every file's expected output is written next to each print line.
