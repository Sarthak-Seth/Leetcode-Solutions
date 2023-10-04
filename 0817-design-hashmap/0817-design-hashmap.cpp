class MyHashMap 
{
public:
    vector<int>m;
    MyHashMap() 
    {
        m.resize(1000001,-1);
    }
    
    void put(int k, int v) 
    {
        m[k] = v;
    }
    
    int get(int k) 
    {
        return m[k];
    }
    
    void remove(int k) 
    {
        m[k]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */