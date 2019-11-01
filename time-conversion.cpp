// https://www.hackerrank.com/challenges/time-conversion/problem

string timeConversion(string s) {
    /*
    0123456789
    01:00:00AM---->1
    02:00:00AM---->2
    03:00:00AM---->3
    .
    .
    .
    .
    .
    12:00:00PM---->12
    01:00:00PM---->13
    02:00:00PM---->14
    03:00:00PM---->15
    .
    .
    .
    .
    .
    11:00:00PM---->23
    12:00:00AM---->00       //24 hour clock reset
    */

    int hh =  (s[0] - '0')*10 + (s[1] - '0');   //converted character hour to integer
    string time;
    string str;
    if(s[8]=='A' && hh == 12)   //12 am midnight
    {
        time.push_back('0');
        time.push_back('0');
    }

    else if(s[8] == 'A' && hh < 12)    //1 to 11 am 
    {
        
            time.push_back('0' + hh/10);
            time.push_back('0' + hh%10) ;
        
    }

    else if(hh == 12 && s[8] == 'P')    //12 pm
    {
        time.push_back('1');
        time.push_back('2');
    }

    
    else if(hh<12 && s[8] == 'P')       //everything from 1 pm to 11 pm
    {
        hh = 12 + hh;
        time.push_back('0' + hh/10);
        time.push_back('0' + hh%10);   
    }

   

    for(int i = 2;i<=7;i++)     //copying minutes and seconds exactly as they were
    {
        time.push_back(s[i]);
    }

    return time;
}
