class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> s;
        int i=0;
        int j=numbers.size()-1;
        //sort(numbers.begin(), numbers.end());
        while(i<j)
        {
            int ps= numbers[i]+numbers[j];
            if(ps > target)
            {
                j--;
            }
            else if(ps < target)
            {
                i++;
            }
           
           else
            {
                s.push_back(i+1);
                s.push_back(j+1);
                break;
            }
            
        
        }
        return s;
    }
};