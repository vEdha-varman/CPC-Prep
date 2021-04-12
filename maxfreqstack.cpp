#include <iostream>
#include <vector>

struct Coin
{
    int head, tail=0;
};
class FreqStack {
        vector<int> stacc;
public:
    FreqStack() {
    }
    
    void push(int val) {
        stacc.push_back(val);
    }
    
    int pop() {
        Coin coins[stacc.size()];
        Coin temp={-1, 0};
        int k=0, pos=0;
        
        for(int i=0, j; i<stacc.size(); i++) {
            for(j=0; j<k; j++) {
                if(coins[j].head == stacc[i]) {
                    coins[j].tail++;
                    break;
                }
            }
            if(j==k && k != 0) {
                coins[k] = {stacc[i], 1};
                k++;
            }
        }
        
        temp=coins[0];
        for(int i=1; i<k; i++) {
            if(temp.tail < coins[i].tail) {
                temp = coins[i];
            }
        }
        
        for(int i=stacc.size()-1; i>=0; i--) {
            if(stacc[i] == temp.head)
            {
                pos=i;
                break;
            }
        }
        
        stacc.erase(stacc.begin() + pos);
        
        return temp.head;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */