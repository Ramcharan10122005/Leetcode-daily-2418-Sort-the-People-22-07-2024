class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int>hash(100001,-1);
        for(int i=0;i<heights.size();i++){
            hash[heights[i]]=i;
        }
        vector<string>ans;
        for(int i=100000;i>=0;i--){
            if(hash[i]!=-1)
            ans.push_back(names[hash[i]]);
        }
        return ans;
    }
};
