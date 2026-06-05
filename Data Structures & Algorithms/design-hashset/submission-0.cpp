class MyHashSet {
    private:
    vector<int> vec;
        
public:
    MyHashSet() {
    }
    
    void add(int key) {
        for(auto i:vec){
            if(i==key){
                return;
            }
        }
        vec.push_back(key);
    }
    
    void remove(int key) {
        erase(vec,key);
        // vec.erase(remove(vec.begin(), vec.end(), 2), vec.end());
    }
    
    bool contains(int key) {
        for(auto i:vec){
            if(i==key){
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