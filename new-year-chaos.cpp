// https://www.hackerrank.com/challenges/new-year-chaos/problem

void minimumBribes(vector<int> q) 
{
    int moves = 0;
    for (int i = 0; i < q.size(); i++) 
    {
        if (q[i] - (i + 1) > 2) 
        {
            cout << "Too chaotic" << endl;
            return;
        }
//#rule0: People are standing in the line in increasing order of their sizes.
//#rule1: A person can only bribe the person just infront of him. 
//#rule2: He can only do this two times atmost.

//Lets consider a random person at index 'i of the line. We call him q[i]

//All bigger people who are ahead of q[i] in the line must have bribed q[i] at some point of time.

//Similarly if q[i] is ahead of someone smaller than him in line , he might also have bribed to get ahead in the line.

//Lets see the process...

//Maximum moves q[i] could have gone ahead by bribing smaller people infront of him is only 2 moves. 

//So by bribing smaller people , q[i] gets its new position i.e. 2 moves before its old position.

//This is the most far q[i] can go by bribing.

//Lets call this position "maximum_ahead_for_q[i]". 

//Now some bigger person who is behind q[i] sees his position.

//Let's say that this bigger person is in hurry and wants to take q[i]'s position.

//He bribes q[i]. q[i] accepts the bribe and moves back one position.

//And this bribing q[i] to push him back of the line could have continued to happen until q[i] reached the end of the line

//So what is the range of positions where we can find people who have bribed q[i]

//from "q[i]-2" to "current position of q[i] -1".

//i.e [ q[i]-2 , i ]

            for (int j = max(0,q[i]-2); j < i; j++)
                if (q[j] > q[i]) moves++;    
    }
    cout << moves << endl;
}
