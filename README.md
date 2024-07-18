# Leetcode-daily-1530-Number-of-Good-Leaf-Nodes-Pairs-18-07-2024
You are given the root of a binary tree and an integer distance. A pair of two different **leaf** nodes of a binary tree is said to be good if the length of **the shortest path** between them is less than or equal to distance.

Return the number of good leaf node pairs in the tree.

 

# Example 1:

![image](https://github.com/user-attachments/assets/588b6cf0-7328-4141-9544-642a277af2d6)

**Input:** root = [1,2,3,null,4], distance = 3

**Output:** 1

**Explanation:** The leaf nodes of the tree are 3 and 4 and the length of the shortest path between them is 3. This is the only good pair.

# Example 2:
![image](https://github.com/user-attachments/assets/1316c43a-257d-48e9-b2bf-2f3b350c9ba4)


**Input:** root = [1,2,3,4,5,6,7], distance = 3

**Output:** 2

**Explanation:** The good pairs are [4,5] and [6,7] with shortest path = 2. The pair [4,6] is not good because the length of ther shortest path between them is 4.

# Example 3:

**Input:** root = [7,1,4,6,null,5,3,null,null,null,null,null,2], distance = 3

**Output:** 1

**Explanation:** The only good pair is [2,5].
 

# Constraints:

- The number of nodes in the tree is in the range [1, 210].
- 1 <= Node.val <= 100
- 1 <= distance <= 10

# problem:
https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/description/?envType=daily-question&envId=2024-07-18
