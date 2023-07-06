In this challenge, you are required to compute the area of a rectangle using classes.

Create two classes:

__Rectangle__

The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space.

__RectangleArea__

The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of the rectangle. The RectangleArea class should also overload the display() method to print the area _(width x height)_ of the rectangle.

__Input Format__

The first and only line of input contains two space separated integers denoting the width and height of the rectangle.

__Constraints__
_1 <= width,height>=100_

__Output Format__

The output should consist of exactly two lines:
In the first line, print the width and height of the rectangle separated by space.
In the second line, print the area of the rectangle.

__Sample Input__
```
10 5
```
__Sample Output__
```
10 5
50
```
