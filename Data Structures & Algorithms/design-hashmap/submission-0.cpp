class MyHashMap {
public:
vector<vector<int>> hash_map;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        cout<<"Put"<<endl;
        for(auto& i: hash_map)
        {
            if(i[0] == key)
            {
                i[1] = value;
                cout<<key<<" "<<i[1]<<endl;
                return;
            }
        }
        
        hash_map.push_back({key, value});
    }
    
    int get(int key) {
        cout<<"get"<<endl;
        for(auto i: hash_map)
        {
            cout<<" "<<i[0]<<" "<<i[1]<<endl;
            if(i[0] == key)
            {
                return i[1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0; i<hash_map.size(); i++)
        {
            if(hash_map[i][0] == key)
            {
                hash_map.erase(hash_map.begin()+i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */