import java.util.*; 
import java.io.*; 

class slice{
	
	public int findSliceNum (int[] a, int M){
		int m = M; 
		int tempvalue = a[0]; 
		for(int i = 1; i < M; i++){
			if(a[i]==tempvalue)
				m--; 
			else{
				tempvalue = a[i];
			}
		}
		return m; 
	}

	public static void main (String args[]){
		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();
		int[] arr = new int[N]; 
		
		for(int i = 0; i < N; i++){
			arr[i] = scan.nextInt();
		}
		Arrays.sort(arr); 
		
		slice s = new slice();
		System.out.println(s.findSliceNum(arr, N)); 
	}
}