class MyHashSet {
public:
    vector <int> hash_set;
    MyHashSet() {
    }
    
    void add(int key) {
        if(!this->contains(key))
        {
            hash_set.push_back(key);
        }
    }
    
    void remove(int key) {
        for(int i = 0; i < hash_set.size(); i++)
        {
            if(hash_set[i] == key)
            {
                hash_set.erase(hash_set.begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        for(int i: hash_set)
        {
            if(i==key)
            {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */