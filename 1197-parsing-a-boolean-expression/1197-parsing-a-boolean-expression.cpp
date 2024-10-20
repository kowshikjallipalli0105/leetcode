class Solution {
public:
    char solveop(char op,vector<char>vec){
        if(op=='!'){
            return vec[0]=='t'?'f':'t';

        }
        if(op=='&'){
            return any_of(vec.begin(),vec.end() ,[](char ch){ return ch=='f';} )?'f':'t';
        }
        if( op=='|'){
            return any_of(vec.begin(),vec.end(), [](char ch){return ch=='t';} )?'t':'f';
        }
        return 't';
    }
    bool parseBoolExpr(string expression) {
        stack<char>st;
        int n=expression.length();
        for(auto i:expression){
                if(i==',') continue;
                if(i==')'){
                    vector<char> vec;
                    while(st.top()!='('){
                        vec.push_back(st.top());
                        // cout<<st.top();
                        st.pop();

                    }
                    st.pop();
                    char op=st.top();
                    st.pop();
                    st.push(solveop(op,vec));
                }else{
                    st.push(i);
                }
        }

        return (st.top()=='t');
    }
};