class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int Total = numBottles;
        int empty = numBottles;

        for(; empty >= numExchange;){
            int newBottles = empty / numExchange;  
            Total += newBottles;               
            empty = (empty % numExchange) + newBottles; 
        }
        return Total;
    }
}; 
