#include <iostream>
#include <algorithm>
#include <utility>
 
using namespace std;
 
struct point {
	int coordinate; 
	int left;
};
bool sort_method(point &a, point &b) {
	return a.coordinate < b.coordinate; 
}
point P[100000];
 
int main() {
	int N; 
	cin >> N;
	int i; 
	for (i = 0; i < N; i++) {
		int X, Y;
		cin >> X >> Y; 
		P[i * 2].coordinate = X;
		P[i * 2].left = 1;
 		P[i * 2 + 1].coordinate = Y;
		P[i * 2 + 1].left = -1;
	}
 
	sort(P, P + 2 * N, sort_method);
 
	int maxOverlaps = 0;
	int total = 0; 

	for (i = 0; i < 2 * N; i++) { // loop over all points
		total += P[i].left; // add or remove a line segment
		if(maxOverlaps<total)
			maxOverlaps = total; 
	}
 
	cout << maxOverlaps << endl;
	return 0;
}