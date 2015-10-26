#include <iostream>
#include <algorithm>

using namespace std;
struct point {
	int coordinate; 
	int value; 
};

bool sort_method(point a, point b) {
	if(a.coordinate!=b.coordinate)
	return a.coordinate < b.coordinate;
	else 
		return a.value < b.value; 
}
  
int main() {
	int N;
	int M; // number of line segments
	cin >> N >> M; 
	point points[N*4];
	int i, count = 0 ; 
	for (i = 0; i < N; i++) {
		int l, r;
		cin >> l >> r; // read in the left and right points of the segment
		if(l< r){
			points[count].coordinate = l; 
			points[count].value = 1; count++;
			points[count].coordinate = r; 
			points[count].value = -1; count++;
		}
		else{
			points[count].coordinate = 0; 
			points[count].value = 1; count++;
			points[count].coordinate = r; 
			points[count].value = -1; count++;
			points[count].coordinate = l; 
			points[count].value = 1; count++;
			points[count].coordinate = M; 
			points[count].value = -1; count++;
		}
	}
	sort(points, points + count, sort_method);
 
	int maxOverlaps = 0;
	int total = 0; 

	for (i = 0; i < count; i++) { // loop over all points
		total += points[i].value; // add or remove a line segment
		if(maxOverlaps<total)
			maxOverlaps = total; 
	}
 
	cout << maxOverlaps << endl;
	return 0;
}