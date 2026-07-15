# Approach for Converting Temperature from Fahrenheit to Centigrade and Centigrade to Fahrenheit

First we take inputs of the unit and the temperature in that unit. Let's store the input temperature in a variable $inp_temp$. Now already tell the user that if they want to input the unit as Fahrenheit, then give the input as $1$ otherwise give the input as $0$. Then we apply the formula:

$$
\frac{C}{5} = \frac{F-32}{9}
$$

Where $C$ is the temperature in centigrade and $F$ is the temperature in Fahrenheit.

From the identity, we can derive the individual conversion steps:

$$
\begin{aligned}
C &= \frac{(F - 32) \times 5}{9} \\
F &= \frac{9 \times C}{5} + 32
\end{aligned}
$$
