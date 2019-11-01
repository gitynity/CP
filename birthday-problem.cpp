https://www.hackerrank.com/challenges/the-birthday-bar/problem

int birthday(vector<int> s, int d, int m) 
{
    
    int count = 0;
    auto n = s.size();
    if(n==0)
    return 0;
    if(m>n)
    return 0;
    if(n==1&&s[0]==d&&m==1)
        return 1;
        

    else
    {
        for(size_t i = 0; i <= n-m; i++)
        {
            int j = 0;
            int sum = 0;
            while(j<m)
            {
                sum +=s[i+j];
                j++;
            }

            if(sum==d)
                count++;
            
        }
    }
return count;

}


