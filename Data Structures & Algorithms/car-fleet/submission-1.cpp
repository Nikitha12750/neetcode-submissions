class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pair;
        for(int i=0;i<position.size();i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.begin(),pair.end());
        vector<double>st;
        for(int i=pair.size()-1;i>=0;i--){
            auto& p=pair[i];
            st.push_back((double)(target-p.first)/p.second);
            if(st.size()>=2&&st.back()<=st[st.size()-2]){
                st.pop_back();
            }
        }
        return st.size();
    }
};
 