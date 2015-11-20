#include <iostream>

using namespace std; 

main(){
	int N;
	cin >> N; 
		if(N < 6){
			cout << N*N*N; 
			return 0; 
		}
		int M1[3]; 
		int M2[3]; 
		cin >> M1[0] >> M1[1] >> M1[2];
		cin >> M2[0] >> M2[1] >> M2[2];
		int same[3];
		int d;
		for(int i=0; i<3; ++i){
			if(M1[i] > M2[i])
				d = M1[i]-M2[i];
			else
				d = M2[i]-M1[i];
			if(d < 5)
				same[i] = 5-d;
			else if((N-d) < 5)
				same[i] = 5+d-N;
			else{
				cout << 250 << endl; 
				return 0; 
			}
		}
		cout << (250-same[0]*same[1]*same[2]) << endl;
		return 0;
}