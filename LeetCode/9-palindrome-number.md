---
lc-id: 9
lc-slug: palindrome-number
lc-title: Palindrome Number
lc-difficulty: Easy
lc-url: https://leetcode.com/problems/palindrome-number/
lc-status: accepted
lc-language: cpp
aliases:
  - Palindrome Number
  - "9"
tags:
  - lc/easy
  - lc/math
---
# Palindrome Number
## Problem
Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

**Example 1:**

```text
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```

**Example 2:**

```text
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

**Example 3:**

```text
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```

**Constraints:**

-   `-2³¹ <= x <= 2³¹ - 1`

**Follow up:** Could you solve it without converting the integer to a string?

## Code

```leetcode-solve
class Solution {
public:
    bool isPalindrome(int x) {
        // Conditionals || (OR), && (AND), is the first filter
        if (x<0 || (x%10 == 0 && x != 0)) {
            return false;
        }
        // 
        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = (reversedHalf * 10) + (x % 10);
            x /= 10;
        }
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
```

## Notes
