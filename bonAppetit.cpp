/*
https://www.hackerrank.com/challenges/bon-appetit/problem
*/

void bonAppetit(vector<int> bill, int k, int b) {
//k = anna wont eat bill[k]
//b = bill paid by anna

int sum = accumulate(bill.begin() , bill.end() ,0);
sum = sum - bill[k];

if(b==sum/2)
{
cout<<"Bon Appetit"<<endl;
}
else
cout<<b - sum/2<<endl;
}
