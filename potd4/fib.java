import java.io.*;
import java.util.*; 

class fib {
	
	public static void main (String [] args) throws IOException {
		
		Scanner scan = new Scanner(System.in); 
		
		int N = scan.nextInt(); 
		int temp1 = 1, temp2 = 1, now = 0; 
		
		for(int i =  0; i < N ; i++){
				now = (temp1 + temp2)% 2017; 
				temp1 = temp2; 
				temp2 = now; 
		}
		
		System.out.println(now);
		
		System.exit(0);
	}
}