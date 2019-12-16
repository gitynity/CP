https://www.hackerrank.com/challenges/magic-square-forming/problem?isFullScreen=true

int diff(vector<vector <int>> a, vector<vector <int>> b) 
{ 
    int res = 0; 
  
    for (int i = 0; i < 3; ++i) 
        for (int j = 0; j < 3; ++j) 
            res += abs(a[i][j] - b[i][j]); 
  
    return res; 
} 


int formingMagicSquare(vector<vector<int>> s) {


/*

There are only 8 possible 3x3 magic sqaures
They are reflections/rotations of 1 pattern

   
   
    8 1 6   6 1 8   4 9 2   2 9 4   8 3 4   4 3 8   6 7 2   2 7 6
    3 5 7   7 5 3   3 5 7   7 5 3   1 5 9   9 5 1   1 5 9   9 5 1
    4 9 2   2 9 4   8 1 6   6 1 8   6 7 2   2 7 6   8 3 4   4 3 8


Notice in all these 8 magic sqaures:

Even numbers are forced at the corners.
Odd numbers are at the edges.
5 is at the center always.


*/

vector<vector<int>> v1 = {{8,1,6},{3,5,7},{4,9,2}};
vector<vector<int>> v2 = {{6,1,8},{7,5,3},{2,9,4}};
vector<vector<int>> v3 = {{4,9,2},{3,5,7},{8,1,6}};
vector<vector<int>> v4 = {{2,9,4},{7,5,3},{6,1,8}};
vector<vector<int>> v5 = {{8,3,4},{1,5,9},{6,7,2}};
vector<vector<int>> v6 = {{4,3,8},{9,5,1},{2,7,6}};
vector<vector<int>> v7 = {{6,7,2},{1,5,9},{8,3,4}};
vector<vector<int>> v8 = {{2,7,6},{9,5,1},{4,3,8}};


int diff1 = diff(s,v1);
int diff2 = diff(s,v2);
int diff3 = diff(s,v3);
int diff4 = diff(s,v4);
int diff5 = diff(s,v5);
int diff6 = diff(s,v6);
int diff7 = diff(s,v7);
int diff8 = diff(s,v8);

int minimum = min(diff1, diff2);
    minimum = min(minimum , diff3);
    minimum = min(minimum , diff4);
    minimum = min(minimum , diff5);
    minimum = min(minimum , diff6);
    minimum = min(minimum , diff7);
    minimum = min(minimum , diff8);


return minimum;
}
