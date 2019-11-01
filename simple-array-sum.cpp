// https://www.hackerrank.com/challenges/simple-array-sum/problem


int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
     int sum = 0;
     for(int i=0;i<ar.size();i++)
     {
         sum+=ar.at(i);
     }
     return sum;

}
