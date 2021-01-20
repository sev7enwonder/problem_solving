class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(char ch:s){
            if(ch=='(' || ch=='{' || ch=='[') st.push(ch);
            else if(st.empty()) return false;
            else if(ch==')'){
                if(st.top()!='(') return false;
                st.pop();
            }else if(ch=='}'){
                if(st.top()!='{') return false;
                st.pop();
            }else if(ch==']'){
                if(st.top()!='[') return false;
                st.pop();
            }
        }
        return st.empty()?true:false;
    }
};
