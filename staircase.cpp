// https://www.hackerrank.com/challenges/staircase/problem

void staircase(int n) {

for(int i = 1;i <= n;i++)
{
   for(int k = n-i;k>0;k--)
   cout<<" ";
   for(int j = 1;j <= i;j++)
        cout<<"#";
    cout<<endl;     
}

}

