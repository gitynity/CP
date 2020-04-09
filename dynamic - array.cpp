// https://www.hackerrank.com/challenges/dynamic-array/problem

vector<int> dynamicArray(int n, vector<vector<int>> queries)
{

    vector< vector <int> > arrays(n); // 2D vector with n rows

    int lastAnswer = 0;

    vector<int> answer;

    for(auto i = 0;i < queries.size();i++)
    {
        int x = queries[i][1];
        int y = queries[i][2];
        int pos = (x^lastAnswer)%n;

        if(queries[i][0] == 1)
        {

            arrays.at(pos).emplace_back(y);
        }
        else //if(queries[i][0] == 2)
        {
            int size = arrays.at(pos).size();
            lastAnswer = arrays.at(pos).at(y%size);
            answer.emplace_back(lastAnswer);
        }

    }
    return answer;
}

//what i learned here was how to push_back elements in a 2D vector
