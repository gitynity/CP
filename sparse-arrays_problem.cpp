// https://www.hackerrank.com/challenges/sparse-arrays/problem

vector<int> matchingStrings(vector<string> strings, vector<string> queries) 
{
    map<string,int> res;
    
    string temp;
    
    for(int i=0;i<strings.size();i++)
    {
        if(res.size()==0)
            res[strings[i]]=1;
        else
        {
            temp = strings[i];
    
            if(res.find(temp)!=res.end())   //if element exists 
                res[temp]+=1;
            else
                res[temp]=1;       //if element does not exist
        }
    }
    vector<int>result;
    
    for(auto i:queries)
    {
        if(res.find(i)!=res.end())
            result.push_back(res[i]);
        else
            result.push_back(0);    
    }
return result;
}
