class Solution {
	public:
		string FirstNonRepeating(string A){
		  queue<char>q;
		  string ans;
		  int freq[26]={0};
		  for(int i=0;i<A.length();i++){
		      char ch = A[i];
		      freq[ch-'a']++;
		      q.push(ch);
		      while(!q.empty()){
		          if(freq[q.front()-'a']>1){
		              q.pop();
		          }
		          else{
		              ans.push_back(q.front());
		              break;
		          }
		          if(q.empty()){
		              ans.push_back('#');
		          }
		      }
		      
		  }
		  return ans;
		  
		}

};
