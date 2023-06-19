bool isValidParenthesis(string expression)
{
    stack<char>st;
    for(auto x:expression)
    {
        if(x=='[' || x=='(' || x=='{')
         st.push(x);
        else 
        {
            if(st.empty())  return false;
            char y=st.top();
            if ((y == '[' && x == ']') || (y == '{' && x == '}') ||
                (y == '(' && x == ')')) 
                st.pop();
            else
            return false;
        }
    }
    return  st.size()==0;
}
