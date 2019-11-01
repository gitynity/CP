// https://www.hackerrank.com/challenges/compare-the-triplets/problem

vector<int> compareTriplets(vector<int> a, vector<int> b) 
{

    int score_a = 0 , score_b = 0;
    vector<int> scores;
    for(int i=0;i<3;i++)
    {
       if(a[i]>b[i])
            score_a++;
       else if (a[i]<b[i]) 
            score_b++;
            
    }
    scores.push_back(score_a);
    scores.push_back(score_b);

    return scores;
}

