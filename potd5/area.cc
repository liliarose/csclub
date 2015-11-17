	#include <iostream>
#include <algorithm>

using namespace std; 

int main(){
	int N; 
	cin >> N; 
	int areaRec [N];  
	for(int i = 0; i < N; i++){
		cin >> areaRec[i]; 
	}
	int max = 0; 
	for(int i = 0, a = 1; i < N; i++){
		for(int k = i+1; k < N && areaRec[k] >= areaRec[i]; a++, k++);
		for(int k = i-1; i >=0 && areaRec[k] >= areaRec[i]; a++, k--); 
		if(max < (areaRec[i]*a))
			max = areaRec[i]*a; 
		a = 1; 
	}
	
	cout << max << endl; 
}																							