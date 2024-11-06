class MyHashSet {
    private: 
      static const int SIZE=1000001;
      bool hashSet[SIZE];
public:
    MyHashSet() { //initializa all ekement to false 
        for(int i=0;i<SIZE;i++){
            hashSet[i]=false;
        }
        
    }
    
    void add(int key) {
        hashSet[key]=true; //mark the key as present
        
    }
    
    void remove(int key) {
        hashSet[key]=false; //mark the key as absent
        
    }
    
    bool contains(int key) {
        return hashSet[key];  // Return true if key is present, otherwise false
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */