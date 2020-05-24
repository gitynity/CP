// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <vector>
#include <iostream>
using namespace std;


int main() 
{
    int n,q;
    cin>>n>>q;

    vector<vector<int>> v(n);
    int k;

    for(auto i = 0;i<n;i++)
    {
        cin>>k; //size of inside array
        v[i].resize(k);
        for(auto j=0;j<k;j++)
        {
            int temp;
            cin>>temp;
            v[i][j] = temp;
        }
    }
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        cout<<v[i][j]<<'\n';
    }
    return 0;
}
