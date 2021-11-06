/*
given a number, spell its digits in the order of appearance.
Ex:
Input: 123
Output:One Two Three
*/
#include <iostream>
using namespace std;

void func(int n)
{
	if(n<=0)
		return;
	func(n/10);
	switch(n%10)
	{
	    case 1: cout<<"One ";break;
	    case 2: cout<<"Two ";break;
	    case 3: cout<<"Three ";break;
	    case 4: cout<<"Four ";break;
	    case 5: cout<<"Five ";break;
	    case 6: cout<<"Six ";break;
	    case 7: cout<<"Seven ";break;
	    case 8: cout<<"Eight ";break;
	    case 9: cout<<"Nine ";break;
	}
}

int main()
{
	func(6849241);
	return 0;
}
