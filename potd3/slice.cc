#include <iostream>
#include <algorithm>
#include <utility>	

using namespace std;
 
int main() {
	int N; 
	cin >> N; 
	int i, k; 
	int P[N];
	for (i = 0; i < N; i++) {
		cin >> k; 
		P[i] = k; 
	}
	sort(P, P );
	
	int comp = P[0];
	int M = N;
	for(int i = 1; i< N ; i++){
		if(P[i] == comp)
			M--;
		else
			comp = P[i];
	}
	cout << M << endl; 
	/*int maxOverlaps = 0;
	int total = 0; 

	for (i = 0; i < 2 * N; i++) { // loop over all points
		total += P[i].left; // add or remove a line segment
		if(maxOverlaps<total)
			maxOverlaps = total; 
	}
 
	cout << maxOverlaps << endl;*/
	return 0;
}