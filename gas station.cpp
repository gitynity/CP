//  https://www.interviewbit.com/problems/gas-station/

/*
Given two integer arrays A and B of size N.
There are N gas stations along a circular route, where the amount of gas at station i is A[i].
You have a car with an unlimited gas tank and it costs B[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations.
Return the minimum starting gas station’s index if you can travel around the circuit once, otherwise return -1.
You can only travel in one direction. i to i+1, i+2, … n-1, 0, 1, 2.. Completing the circuit means starting at i and ending up at i again.
*/

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) 
{
    long long sumgas=0,sumcost=0;

    for(int i=0;i<A.size();i++)
    {
        sumgas+=A[i];
        sumcost+=B[i];
    }

    if(sumcost>sumgas)
    return -1;

    int bal=0;
    int count=0;
    int gas=0;
    int cost=0;
    int n = A.size();
    for(int i=0;count<=n;i++)
    {
        gas = A[i%n]+bal;
        cost = B[i%n];
        bal = gas - cost;

        if(bal<0)
        {
            bal = 0;
            count = 0;
            continue;
        }
        else
        {
            count++;
            if(count==n)
            {
                return (i+1)%n;
            }
        }
    }

}
