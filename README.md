N ----- Time Complexity
-----------------------
10^18 ----- O(logN)

10^8 ----- O(N)

10^4 ----- O(N*N)

10^7 ----- O(N*logN)

10^2 ----- O(N*N*N)

0<N<90 ----- O(N*N*N*N)

0<N<20 ----- O(2^N)

0<N<11 ----- O(N!)

Why? Because time limit for most problems online is 1 second only. And maximum operations that can be performed by a computer in 1 second is O(10^8).

Reasons for segmentation errors:
* dividing by zero
* segmentation fault
* you made an array of smaller size than the problem required and thus it reached for memory out of its access
* your code tries to access negative indexes of array
* you made a gobal array of size greater than 10^8
* Note: The maximum stack space computer allows for a function is 4 MB. So you cannot declare a local int array on stack of size more than 10^6. But if you do want an array of size greater than that , use heap memory i.e dynamic allocation.

________________________________________________________________________________________________________________________________________________________________________

Number theory
-------------

Modulo
a%b = a - b*floor(a/b)

example:
15%4 = 15 - 4*floor(15/4)
	 = 15 - 4*3
	 = 15 - 12
	 = 3

Euclids theorem
gcd(a,b) = gcd(b,a%b) ; given a>b
gcd(a , 0) = a

Extended Euclids theorem
ax + by = gcd(a,b) ; x and y are called roots
