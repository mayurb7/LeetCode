class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string> e;
        vector<string> g;
        vector<string> p;
        vector<string> r;
        vector<string> ans;
        
        for(int i=0 ; i<code.size() ; i++){
            int order=0;
            
            if(code[i]==""){
                continue;
            }

            if(isActive[i]!=true){
                continue;
            }

            int hit=0;
            for(int j=0 ; j<code[i].size() ; j++){
                bool flag=false;
                int a=int(code[i][j]);
                
                if(a>=48 && a<=57 || a>=65 && a<=90 || a>=97 && a<=122 || a==95){
                    flag=true;
                }

                if(flag==false){
                    hit++;
                }
            }

            if(businessLine[i]!="electronics" && businessLine[i]!="grocery" && businessLine[i]!= "restaurant" && businessLine[i]!="pharmacy"){
                continue;
            }

            if(businessLine[i]=="electronics" && hit<=0){
                e.push_back(code[i]);
            }
            if(businessLine[i]=="grocery" && hit<=0){
                g.push_back(code[i]);
            }
            if(businessLine[i]== "pharmacy" && hit<=0){
                p.push_back(code[i]);
            }
            if(businessLine[i]== "restaurant" && hit<=0){
                r.push_back(code[i]);
            }
        }

        sort(e.begin(),e.end());
        sort(g.begin(),g.end());
        sort(p.begin(),p.end());
        sort(r.begin(),r.end());

        for(auto it : e) ans.push_back(it);
        for(auto it : g) ans.push_back(it);
        for(auto it : p) ans.push_back(it);
        for(auto it : r) ans.push_back(it);

        return ans;
    }
};