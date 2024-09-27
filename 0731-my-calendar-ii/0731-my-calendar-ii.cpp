class MyCalendarTwo {
public:
    map<int,int>event;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        event[start]++;
        event[end]--;
        int cur=0;
        for( auto[time,change]:event){
            cur+=change;
            if(cur>=3){
                event[start]--;
                event[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */