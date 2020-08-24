// https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/find-triplets-that-sum-to-x/problem

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    int targetsum;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    cin>>targetsum;
    
    sort(v.begin() , v.end());
    
    int flag=0;
    for(int i =0;i<n-1;i++)
    {
        if(flag==1)
        break;
        int l = i+1;  //left pointer
        int r = n-1;  //right pointer
        while(l<r)
        {
            if(v[i]+v[l]+v[r]==targetsum)
            {
                cout<<v[i]<<" "<<v[l]<<" "<<v[r]<<endl;
                flag=1;
                break;
            }
            else if(v[i]+v[l]+v[r] < targetsum)
                l++;
            else
                r--;
        }
    }
    
    return 0;
}
