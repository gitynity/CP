https://www.hackerrank.com/challenges/s10-basic-statistics/problem

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,x;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {    
        cin>>x;
        a.push_back(x); 
    }

    float mean;

        sort(a.begin(),a.end());

        mean = accumulate(a.begin(),a.end(),0);

        mean = mean/n;

        printf("%.1f\n",mean);    //rounds off mean to 1 decimal place

//for median

float median;
if(n%2==0)
{
    median = (a[(n-2)/2] + a[(n+1)/2])/2.0;
}
else
{
    median = a[(n-1)/2];
}
cout<<median<<endl;


    //for mode       
int counter = 1;
int mode = 0;
int m[2500] = {};  //array with all elements to zero    //2500 is the limit given in constraints

for(int i = n-1;i>=0;i--)    //loop to count frequency of each number in array
{
    if(a[i-1] == a[i])
        counter++;

    else if(a[i-1] < a[i])
    {                            //i am storing the numbers and their frequency in a separate array
                                //with the frequency of number as index and the number itself as the value. 
        m[counter] = a[i];
        counter = 1; 
    }
   
}

for(int i = 0;i < 2500;i++)
{
    if(m[i]>0 && i>mode)
    {
        mode = i;
    }
}
cout<<m[mode]<<endl;

    return 0;
}
