//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

vector<int> breakingRecords(vector<int> scores) {

    vector<int>::iterator it;
    int min = scores.at(0);
    int max = scores.at(0);

    int count_high = 0;
    int count_low = 0;
    for(it=scores.begin();it!=scores.end();it++)
    {
        if(*it>max)
        {   max = *it;
            count_high++;
        }
        if(*it<min)
        {
            min = *it;
            count_low++;
        }
    }
    vector<int> record_broken_times;
    record_broken_times.push_back(count_high);
    record_broken_times.push_back(count_low);

return record_broken_times;
}

