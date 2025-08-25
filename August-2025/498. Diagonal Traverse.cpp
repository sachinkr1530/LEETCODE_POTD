class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        vector<int>ans;

        map<int , vector<int>>mp;

        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[0].size() ; j++){
                mp[i + j].push_back(mat[i][j]);
            }
        }

        for(auto i : mp){
            
            if(i.first % 2 == 0){
                reverse(i.second.begin() , i.second.end());
            }

            for(auto j : i.second){
                ans.push_back(j);
            }
        }
        return ans;
    }
};