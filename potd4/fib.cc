#include <iostream>

using namespace std; 

int main(){
	
	int N; 
	cin>> N; 
	
	int t1 = 1, t2 = 1, now = t1 +t2; 
	
	for(int i = 0 ; i < N ; i++){
		now = (t1 + t2) % 2017; 
		t1 = t2; 
		t2 = now; 
	}
	
	cout << now << endl ;
}