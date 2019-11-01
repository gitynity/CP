//https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(vector<long> ar) 
{

long tallest_candle = 0;
vector<long>::iterator it;

tallest_candle = *max_element(ar.begin(), ar.end());

long count = 0;

for(it = ar.begin();it!=ar.end();it++)
{
    if(*it == tallest_candle)
        count++;
}
return count;
}
