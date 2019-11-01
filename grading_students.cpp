// https://www.hackerrank.com/challenges/grading/problem

vector<int> gradingStudents(vector<int> grades) {

vector<int>::iterator it;
for(it=grades.begin();it!=grades.end();it++)
{
    if(*it%5==0)
        continue;
    else if(*it>=38)
    {
        int temp = *it;
        while(temp%5!=0)
        temp++;
        if(temp-*it<3)
        *it = temp;
        else
        continue;
    }    
}
return grades;
}

