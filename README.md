# LeetCode 11 - Container With Most Water

## Problem Statement

Given an integer array `height`, find two lines that together with the x-axis form a container that can store the maximum amount of water.

## Example

**Input:**
```text
height = [1,8,6,2,5,4,8,3,7]
```

**Output:**
```text
49
```

## Visualization

![Container With Most Water](container_example.png)

---

## 1. Brute Force Approach

**Approach:**
- Use two nested loops to check every possible pair of lines.
- Calculate the width using `j - i`.
- Find the minimum height of the two lines.
- Calculate the water area.
- Update the maximum water.

**Formula:**

`Area = Width × Minimum Height`

**Complexity:**
- Time Complexity: O(n²)
- Space Complexity: O(1)

## 2. Optimal Approach - Two Pointer

**Approach:**
- Initialize two pointers: `lp` at the beginning and `rp` at the end.
- Calculate the width and minimum height.
- Calculate the current water area and update the maximum area.
- Move the pointer with the smaller height.
- Repeat until both pointers meet.

**Complexity:**
- Time Complexity: O(n)
- Space Complexity: O(1)

---

## Output

```text
49
```

Both approaches solve the problem, but the Two Pointer approach is more efficient.