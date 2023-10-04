class MyHashMap 
{
public:
    int m[1000001];
    MyHashMap() 
    {
        memset(m,-1,sizeof m);
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