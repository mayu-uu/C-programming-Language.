# Approach for Coverting Temperature from Farhenheit to Centigrade and centigrade to Fahrenheit

First we take inputs of the unit and the temperature in that unit. Let's store the input temperature in a varible $inp_temp$. Now already tell the user that if they want to input the unit as Fahrenheit, then give the input as $1$ otherwise give the input as $0$. Then we apply the formula:
$\frac{C}{5} = \frac{F-32}{9}$
$C$ is temperature in centigrade unit and $F$ is temperature in Fahrenheit unit.
From the identity we can see that:
$$
C = \frac{(F-32)*5}{9} 
F = \frac{5*C}{9}+32
$$