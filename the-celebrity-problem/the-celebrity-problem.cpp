class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        stack<int> st;
        int n = mat.size();
        for(int i = 0;i<n;i++) {
            st.push(i);
        }
        
        while(st.size()>1) {
            int i = st.top();
            st.pop();
            int j = st.top();
            st.pop();
            
            if(mat[i][j] && mat[j][i]) {
                continue;
            }
            if(mat[i][j]) { // if i knows j ten it shouldn't be celibrity
                
                st.push(j);  /// may be j is celibrity?
                
            }
            if(mat[j][i]) { //if j knows i, j is not celibrity
                st.push(i);
            }
            
            
            
        }
        if(st.empty()) return -1;
        int tp = st.top();
        for(int k = 0;k<n;k++) {
            if(tp==k) continue;
            if(mat[tp][k]!=0) return -1;
            if(mat[k][tp]!=1) return -1;
        }
        return tp;
    }
