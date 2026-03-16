class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> p;
        vector<string> temp = strs;  
        
        for(int i = 0; i < temp.size(); i++)
        {
            sort(temp[i].begin(), temp[i].end());
        }

        vector<bool> used(strs.size(), false);

        for(int i=0;i<strs.size();i++)
        {
            if(used[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            used[i] = true;

            for(int j = i + 1; j < strs.size(); j++)
            {
                if(temp[i] == temp[j])
                {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }

            p.push_back(group);
        }

        return p;
    }
};