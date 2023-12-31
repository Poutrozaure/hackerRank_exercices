A student signed up for _n_ workshops and wants to attend the maximum number of workshops where no two workshops overlap. You must do the following:

Implement _2_ structures:

1. struct Workshop having the following members:

- The workshop's start time.
- The workshop's duration.
- The workshop's end time.

2. struct Available_Workshops having the following members:

- An integer, _n_ (the number of workshops the student signed up for).
- An array of type Workshop array having size .

Implement 2 functions:

1. Available_Workshops* initialize (int start_time[], int duration[], int n)
Creates an Available_Workshops object and initializes its elements using the elements in the _start_time[]_ and _duration[]_ parameters (both are of size _n_). Here, _start_time[i]_ and _duration[i]_ are the respective start time and duration for the _i^th_ workshop. This function must return a pointer to an Available_Workshops object.

2. int CalculateMaxWorkshops(Available_Workshops* ptr)
Returns the maximum number of workshops the student can attend—without overlap. The next workshop cannot be attended until the previous workshop ends.

Note: An array of unknown size (_n_) should be declared as follows:
```
DataType* arrayName = new DataType[n];
```
__Input Format__

Input from stdin is handled by the locked code in the editor; you simply need to write your functions to meet the specifications of the problem statement above.

__Constraints__
- _1 <= N <= 10^5_
- _0<= start_time_i <= 10^3_
- _0 <= duration_i <= 10^3_
- 
__Output Format__

Output to stdout is handled for you.

Your initialize function must return a pointer to an Available_Workshops object.
Your CalculateMaxWorkshops function must return maximum number of non-overlapping workshops the student can attend.

__Sample Input__
```
6
1 3 0 5 5 8
1 1 6 2 4 1
```

__Sample Output__

CalculateMaxWorkshops should return _4_ .
