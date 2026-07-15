At first we take input from the user, using `scanf()`. Let's say we first take input of the length and the breadth of the rectangle. We store them in variables $l$ and $b$ respectively. We know that Area of a rectangle ($A$) is multiplication of its length and breadth.

$$
A = lb
$$

Now we take the input of the radius of the circle from the user and store it in the variable $r$. We know that Area ($A$) of a circle is $\pi r^2$ and circumference of the circle is $2\pi r$. To get the value of $\pi$ we will use the `acos()` function in C from the `math.h` library. We know that $\text{acos}(-1) = \pi$.
