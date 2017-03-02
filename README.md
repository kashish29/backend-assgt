##Solution

###Idea

It can be easily seen that the number of such strings with length n would be the sum of number of such strings with length n-1 and length n-2. i.e 
F(n) = F(n-1) + F(n-2).
Which is a fibonacci sequence starting with F(1)=2 and F(2)=3.
Now to calculate the fibonacci sequence we use the formula
![](https://latex.codecogs.com/gif.latex?%5Cbegin%7Bpmatrix%7D%201%20%261%20%5C%5C%201%26%200%20%5Cend%7Bpmatrix%7D%5E%7Bn%7D%3D%5Cbegin%7Bpmatrix%7D%20F%28n&plus;1%29%20%26%20F%28n%29%20%5C%5C%20F%28n%29%20%26%20F%28n-1%29%20%5Cend%7Bpmatrix%7D)