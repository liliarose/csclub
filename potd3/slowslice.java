import java.util.*; 
import java.io.*; 

class slowslice{
	
	public void slice (int[] a){
		int minus, count =0;
		for(;a[count]==0;count++){
		}		
		minus = a[count];
		for(int i = count ; i < a.length; i++){
			a[i]= a[i] - minus; 
			//System.out.println("arr[N-1]: "+a[a.length-1]);
			//System.out.println(a[i]); 
		}
	}

	public static void main (String args[]){
		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();
		int[] arr = new int[N]; 
		
		for(int i = 0; i < N; i++){
			arr[i] = scan.nextInt();
		}
		Arrays.sort(arr); 
		slowslice s = new slowslice();
		int count; 
		for(count = 0; arr[N-1] != 0; count++){
			s.slice(arr); 
		}
		
		System.out.println(count); 
	}
}