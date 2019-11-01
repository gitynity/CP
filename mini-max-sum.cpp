// https://www.hackerrank.com/challenges/mini-max-sum/problem

void miniMaxSum(vector<long> arr)
{

 sort(arr.begin(),arr.end());

  vector<long>::iterator it;
  long minsum = 0;
  long maxsum = 0;

    for(it=arr.begin();it<=arr.end()-2;it++)    //arr.begin() returns an iterator pointing to the first element in vector
            minsum+=*it;        
    
    for(it=arr.end()-1;it>=arr.begin()+1;it--)  //arr.end() returns an iterator pointing to next to last element of the vector. Remember next to last.
            maxsum+=*it;
    

    cout<<minsum<<" "<<maxsum;
}
int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<long> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

