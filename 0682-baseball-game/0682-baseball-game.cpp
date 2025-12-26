class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;

        for(int i=0 ; i<operations.size() ; i++){
            if(operations[i]=="C"){
                if(!st.empty()) st.pop();
            }
            else if(operations[i]=="D"){
                if(!st.empty()) st.push(st.top()*2);
            }
            else if(operations[i]=="+"){
                if(st.size()>=2){
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();

                    st.push(b);
                    st.push(a);
                    st.push(a+b);
                }
            }
            else{
                st.push(stoi(operations[i]));
            }
        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        return ans;
    }
};