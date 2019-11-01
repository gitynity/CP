//https://www.hackerrank.com/challenges/apple-and-orange/problem

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

/*


    s: integer, starting point of Sam's house location.
    t: integer, ending location of Sam's house location.
    a: integer, location of the Apple tree.
    b: integer, location of the Orange tree.
    apples: integer array, distances at which each apple falls from the tree.
    oranges: integer array, distances at which each orange falls from the tree.


The first line contains two space-separated integers denoting the respective values of s and t.
The second line contains two space-separated integers denoting the respective values of a and b.
The third line contains two space-separated integers denoting the respective values of m and n .
The fourth line contains m space-separated integers denoting the respective distances that each apple falls from point .
The fifth line contains n space-separated integers denoting the respective distances that each orange falls from point .  


*/
int count_a = 0;    //for apples
int count_b = 0;    //for oranges
vector<int>::iterator it;
for(it=apples.begin();it!=apples.end();it++)
{
    *it+=a;
}

for(it=apples.begin();it!=apples.end();it++)
{
    if(*it>=s && *it<=t)
        count_a++;
}

for(it=oranges.begin();it!=oranges.end();it++)
{
    *it+=b;
}

for(it=oranges.begin();it!=oranges.end();it++)
{
    if(*it>=s && *it<=t)
        count_b++;
}

cout<<count_a<<"\n"<<count_b<<"\n";
}

