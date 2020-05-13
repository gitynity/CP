//https://www.hackerrank.com/challenges/balanced-brackets/forum

string isBalanced(string s) 
{

    stack<char> st;
    int l=s.size();

    if(l%2!=0)
        return "NO";

    for(int i=0;i<l;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
          
// C++-STL 'Stack' errors and exceptions
//If the stack container is empty, it causes undefined behaviour
//It has a no exception throw guarantee if the stack is not empty

        else if(!st.empty()&&s[i]==')'&&st.top()=='(') //Thus checking if !st.empty()
            st.pop();
        else if(!st.empty()&&s[i]=='}'&&st.top()=='{')
            st.pop();
        else if(!st.empty()&&s[i]==']'&&st.top()=='[')
            st.pop();
        else    st.push(s[i]);
    }
if(st.empty())  return "YES";
    else return "NO";

}
