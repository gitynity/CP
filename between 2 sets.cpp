//https://www.hackerrank.com/challenges/between-two-sets/problem

int getTotalX(vector<int> a, vector<int> b)
{

int max = *max_element(a.begin() , a.end());
int min = *min_element(b.begin() , b.end());

 
int count = 0;
size_t sumb = 0;
for(int i = max;i <= min;i++)
{
    size_t suma = 0;
        for(size_t j = 0;j<a.size();j++)
        {
            if(i%a[j] == 0)        //check if i is divisible by all numbes of vector a
            {
                suma++;
            }
            else break;
        }
        if(suma == a.size())        //if every number of vector a is a factor of i
            {
                sumb=0;
                for(size_t k = 0;k<b.size();k++)
                {
                    
                        if(b[k]%i == 0)        //check if every number of vector b is a multiple of i
                        {
                            sumb++;
                        }
                        else break;
                }
                if(sumb == b.size() )
                {
                    //cout<<i<<endl;
                    count++;    //if i is a multiple of every number in a and  i is a factor of every number in b , increase count
                }
            }
} 

return count;

}

