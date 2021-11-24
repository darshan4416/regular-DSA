class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        int i;
        for(i=0;i<s.size();i++){
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                
                st.push(s[i]);
               // continue;
            }
            else{
                 if(st.empty()) return false;
                if(s[i]==')')
                {
                    if( st.top()!='(') return false;
                    
                }
                if(s[i]=='}')
                {
                    if( st.top()!='{')return false;
                }
                if(s[i]==']')
                {
                    if( st.top()!='[')return false;
                }
               st.pop();
            }
        }
        return st.empty();
    }
};
