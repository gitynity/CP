// https://www.hackerrank.com/challenges/minimum-swaps-2/problem


int minimumSwaps(vector<int> arr) 
{
int n = arr.size() , count = 0;

for(auto i=0;i<n;i++)
{
    if(arr[i] == i+1)
        continue;
    else 
    {
        int temp =  arr[i];
        swap(arr[i] , arr[temp-1]);
        count++;
        i =-1;  //again start from beining
    }    
}

return count;

}
