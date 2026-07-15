# Approach for Getting the Average of 3 Numbers and Finding Numbers Greater and Lesser Than It

Let's say the three given numbers are stored in variables $a$, $b$, and $c$. Now take another variable $avg$ that will store the average of the three numbers. 

We know the average of $n$ numbers is:
$$
\text{Average} = \frac{1}{n} \sum_{r=1}^{n} a_r
$$

where $a_r$ represents the $r$-th number. So for $3$ numbers, the average will be:
$$
\text{Average} = \frac{a + b + c}{3}
$$

Next, we check if $avg$ is greater than or lesser than $a$, $b$, and $c$.
