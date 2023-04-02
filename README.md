# Count-all-possible-paths
Count all possible paths from (0,0) to (0,n-1) of a mXn matrix

This was my uni project for the "Synthesis and analysis of algorithms" course. My task was to create functions that count paths in a matrix with some restrictions. I used dynamic programming technique.

Given an matrix 𝑚 × 𝑛. In the beginning we are in the field (0,0), and the goal is to reach the field (0, 𝑛 − 1). If
we are in the field (𝑖,𝑗), in one move it is allowed to go to any of the fields (𝑖 − 1,𝑗 + 1), (𝑖,𝑗 +1), (𝑖 + 1,𝑗 + 1).
a) Count the number of paths to get from the beginning to the end in the described way;
b) Some fields of the matrix are forbidden (for example, a bool matrix of the same dimensions is given which determines which fields are prohibited). Determine in this case the number of ways to get from the beginning to the end.

