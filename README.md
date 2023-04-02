# Count-all-possible-paths
Count all possible paths from (0,0) to (0,n-1) of a mXn matrix

This was my uni project for the "Synthesis and analysis of algorithms" course. My task was to create functions that count paths in a matrix with some restrictions. I used dynamic programming technique.

Given an matrix 𝑚 × 𝑛. In the beginning we are in the field (0,0), and the goal is to reach the field (0, 𝑛 − 1). If
we are in the field (𝑖,𝑗), in one move it is allowed to go to any of the fields (𝑖 − 1,𝑗 + 1), (𝑖,𝑗 +1), (𝑖 + 1,𝑗 + 1).
a) Count the number of paths to get from the beginning to the end in the described way;
b) Some fields of the matrix are forbidden (for example, a bool matrix of the same dimensions is given which determines which fields are prohibited). Determine in this case the number of ways to get from the beginning to the end.

<b>Example,</b>


![image](https://user-images.githubusercontent.com/129538263/229371491-3a4521ff-8e1d-4da9-b948-6fd4136be006.png)
![image](https://user-images.githubusercontent.com/129538263/229371514-e9d519a0-d363-4bf9-a797-d7a970195f37.png)

a)Paths
<p>1. (0,0)→(0,1)→(0,2)→(0,3)

2.(0,0)→(1,1)→(0,2)→(0,3)

3.(0,0)→(1,1)→(1,2)→(0,3)

4.(0,0)→(1,1)→(0,2)→(0,3)</p>


<b>Example 2,</b>
bool matrix is marked with "no" symbol


![image](https://user-images.githubusercontent.com/129538263/229371819-d6e8105c-b117-4f34-8920-4cb3c37bee9b.png)

<p>
Only one path
(0,0)→(1,1)→(0,2)→(0,3)
</p>
