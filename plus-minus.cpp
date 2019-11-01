//https://www.hackerrank.com/challenges/plus-minus/problem

void plusMinus(vector<int> arr) {
int pcount = 0 , ncount = 0 , zcount = 0;

vector<int>::iterator it;
auto s = arr.size();
for(it = arr.begin();it < arr.end();it++)
{
    //cout<<*it;
    if(*it==0)
        zcount++;
    else if(*it>0)
        pcount++;
    else 
        ncount++;    
}
float p = (float)pcount/s;  //why we need to typecast it to float
float n = (float)ncount/s;  //without doing this , it is only giving zero as output
float z = (float)zcount/s;

cout<<p<<"\n"<<n<<"\n"<<z<<endl;
}

