class RandomizedSet {
public:
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
       
       for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == val)
            {
                return false;
            }
        }
        v.push_back(val);  
        return true;
    }
    
    bool remove(int val) {
       
        auto it = find(v.begin(), v.end(), val);
        if(it == v.end())
        {
            return false;
        }
        v.erase(it);
        return true;
        
        
    }
    
    int getRandom() {
        int index = rand() % v.size();
        return v[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */