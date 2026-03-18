// 🔥 1. What is Sliding Window?

// Sliding Window is used when:
// 👉 You need to process subarrays / substrings
// 👉 And avoid recalculating values repeatedly

// Instead of checking every subarray (O(n²)),
// we slide a window and update results in O(n).

// 🧠 Basic Idea

// Think of a window like this:

// [ start .... end ]

// We:

// Expand the window → move end

// Shrink the window → move start

// 🚀 2. Types of Sliding Window
// ✅ 1. Fixed Size Window

// Window size is constant (k)

// 👉 Example: max sum of subarray of size k

// ✅ 2. Variable Size Window

// Window grows/shrinks based on condition

// 👉 Example: longest substring without repeating characters



// 🔹 3. Fixed Size Sliding Window
// Problem:

// Find maximum sum of subarray of size k

// ❌ Brute Force (O(n²))

// Check every subarray

// ✅ Sliding Window (O(n))

// 💡 Key Insight

// Instead of recalculating sum:

// New Window = Old Window + next element - previous element




// 🔹 4. Variable Size Sliding Window
// Problem:

// Longest substring without repeating characters

// 🔥 Idea:

// Use set or map

// Expand window if valid

// Shrink if duplicate found

// 🧠 Pattern Recognition (VERY IMPORTANT)

// Use Sliding Window when:
// ✔ Subarray / substring
// ✔ Contiguous elements
// ✔ Max / min / count / length
// ✔ Condition-based window