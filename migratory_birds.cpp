//https://www.hackerrank.com/challenges/migratory-birds/problem

int migratoryBirds(vector<int> arr) 
{
int count =0 , max_count = 0 ,  to_return = 0;

sort(arr.begin(),arr.end());
vector<int>::iterator it , low1 , up1;

for(int i =1;i<=5;i++)
{
low1 = lower_bound(arr.begin(), arr.end(), i);
up1 = upper_bound(arr.begin() , arr.end() , i);
count = up1 - low1;
//printf("count for %d is %d\n ",i,count);
if(count>max_count)
{
    max_count = count;
    to_return = i;
}
}
return to_return;
}


