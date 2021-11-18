#include<iostream>
#include<map>

using namespace std;

int maxProfit(vector<int>& prices) {
       
        
        int maxPrice = 0;
        int minPrice = INT_MAX;
        
        for(int ind=0; ind<prices.size(); ind++){
            
            minPrice = min(minPrice, prices[ind]);
            maxPrice = max(maxPrice, prices[ind]-minPrice);
            
        }
        
        return maxPrice;        
}

int main(){
	
	vector<int> prices{7,1,5,3,6,4};
	
	cout<<maxProfit(prices);
		
	
}
