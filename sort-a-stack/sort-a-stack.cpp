void helper(stack<int>& st,int x){
    if(st.size()==0){
        st.push(x);
    }
    else{
        if(st.top()<=x){
            st.push(x);
        }
        else{
            int y=st.top();
            st.pop();
            helper(st,x);
            st.push(y);
        }
    }
}
void SortedStack :: sort()
{
   //Your code here
   if(s.size()==0) return;
   int x=s.top();
   s.pop();
   sort();
   helper(s,x);
   
}
