//https://www.hackerrank.com/challenges/day-of-the-programmer/problem

string dayOfProgrammer(int year) {
string date="";
string y = to_string(year);
if(year <= 1917)
{
    if(year%4 == 0)
    {
        date = "12.09." + y;
        
    }
    else 
    date = "13.09." + y;
    
}
else if(year == 1918)
{
    date = "26.09." + y;
    
}
else
{
    if(year%4==0 && year%100!=0 || year%400 == 0)
    {
        date = "12.09." + y;
        
    }
    else
        date = "13.09." + y;
        
}
return date;
}

