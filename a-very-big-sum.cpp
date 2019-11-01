// https://www.hackerrank.com/challenges/a-very-big-sum/problem

long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(auto i = 0;i<ar.size();i++)
    {
        sum+=ar.at(i);
    }
return sum;

}
