class MyCalendar {
public:
    map<int,int>i;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto next=i.lower_bound(start);
        if(next!=i.end()&&next->first<end){
            return false;
        }
        if(next!=i.begin() && prev(next)->second>start){
            return false;
        }
        i[start]=end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */