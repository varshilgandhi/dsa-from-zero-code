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

Run:

```bash
python3 01-binary-search/binary_search.py
g++ -std=c++17 01-binary-search/binary_search.cpp -o bs && ./bs
cd 01-binary-search && javac BinarySearch.java && java BinarySearch
```

Every file's expected output is written next to each print line.
