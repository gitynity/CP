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





//Or using hash_maps (unordered_maps)

vector<int> matchingStrings(vector<string> strings, vector<string> queries)
 {
     unordered_map<string,int> res;
     
     vector<int> result;
     
     for(int i = 0;i<strings.size();i++)
     {
         
         res[strings[i]]=0;
     }


     for(int i = 0;i<strings.size();i++)
     {
         
         res[strings[i]]+=1;
     }

     for(int i = 0;i<queries.size();i++)
     {
         
         if(res[queries[i]])
         {
             result.push_back(res[queries[i]]);
         }
       else result.push_back(0);
     }

return result;  
 }
