https://www.hackerrank.com/challenges/electronics-shop/forum


int getMoneySpent(int n , vector<int> keyboards, int m , vector<int> drives, int b) {
    
    sort(keyboards.begin(),keyboards.end(),greater<int>()); //sorted in descending order
    sort(drives.begin(),drives.end());  //sorted in ascending order

    int max = -1;

    for(int i = 0 , j = 0;i < n;i++)    // for loop used wisely
    {
        for(;j < m;j++)         //j is not reset everytime inner loop ends.
        {
            if(keyboards[i]+drives[j]>b)
                break;          //this prevents j from increasing further

            if(keyboards[i]+drives[j]>max)
            max = keyboards[i]+drives[j];    
        }
    }

    return max;
    /*

    budget    = 10
    keyboards = 3 1
    drives    = 2 5 8

   let max = -1

    {
    
    --> 3,2 so max = 5;
        --> j++
    --> 3,5 so max = 8;
        --> j++
    --> 3,8 , 11 is greater than budget 10
        -->break the inner loop i.e not allowing 'j' to increment
    --> i++
    --> 1,8 so max = 9
        -->inner loop is completed.
    Thus max = 9.        
    
    }
    */
}
