// https://www.hackerrank.com/challenges/crush/problem


long arrayManipulation(int n, vector<vector<int>> queries) {
    
    vector<long> arr(n+1,0);

    for(long i = 0;i<queries.size();i++)
    {
        if(queries[i][1]<=n)
        {
            /* since it is 1 indexed array */ arr[queries[i][0]-1] += queries[i][2];   
            /* since it is 1 indexed array */ arr[(queries[i][1])]  += -queries[i][2];
        }

    }

    for(long i = 1;i<n;i++)
    {
        arr[i] = arr[i-1] + arr[i];
    }

    return *max_element(arr.begin(),arr.end()-1);
    
}
