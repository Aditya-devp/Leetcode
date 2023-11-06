class SeatManager {
public:
//now trying method 2 without initializing all the elems in heap.
priority_queue<int,vector<int>,greater<int>>minhp;
int pointer;
    SeatManager(int n) {
   pointer=1;

    }
    
    int reserve() {
          int ans;
       if(!minhp.empty()){
        ans=minhp.top();
            minhp.pop();
            return ans;
        }
        ans=pointer;
        pointer++;
        return ans;
        
    }
    
    void unreserve(int seatNumber) {
        minhp.push(seatNumber);
        
    }
};


