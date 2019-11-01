// https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr , int n) {
  int pdsum = 0 , sdsum = 0;
   
    for(int i = 0;i < n;i++)
    {
       pdsum += arr[i][i];
       sdsum += arr[n-i-1][i];
    }
    auto diff = abs(pdsum - sdsum); //for absolute value

    return diff;
}

