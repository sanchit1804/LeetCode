class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }
            else if(operations[i]=="+"){
                int v1=st.top();
                st.pop();
                int v2=st.top();
                st.push(v1);
                st.push(v1+v2);
            }
            else st.push(stoi(operations[i]));
        }
        while(st.size() != 0)
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};