## Approach for Finding the Radius of the Circle so that the Areas of the circle and the Rectangle are Equal

First take input of the length($l$) and the breadth($b$) of the rectangle using the __scanf()__ function. Let's assume the radius of the circle will be $r$, we know that Area of a circle with radius $r$ is:
$\pi r^2$
Also we know that, Area of a rectangle with length $l$ and breadth $b$ is:
$lb$
If $\pi r^2 = lb$
$=> r = \sqrt {\frac{lb}{\pi}}$
So the ratio of the perimeter of the circle and the rectangle is:
$\frac{2 \pi r}{2 (l+b)}$
$=> \frac{2 \pi \sqrt {\frac{lb}{\pi}}}{2 (l+b)}$

## Approach for Finding the Radius of the Circle so that the Perimeter of the circle and the Rectangle are Equal

First take input of the length($l$) and the breadth($b$) of the rectangle using the __scanf()__ function. Let's assume the radius of the circle will be $r$, we know that Perimeter of the circle with radius $r$ is:
$2 \pi r$
Also we know that, Perimeter of a rectangle with length $l$ and breadth $b$ is:
$2 (l+b)$
If $2 \pi r = 2 (l+b)$
$=> r = \frac{(l+b)}{\pi}$
So the ratio of the Area of the circle and the rectangle is:
$\frac{\pi r^2}{lb}$
$\frac{\pi (\frac{(l+b)}{\pi})^2}{lb}$


For $\pi$ we will use the __acos()__ of $-1$