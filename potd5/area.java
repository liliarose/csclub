import java.util.*; 
import java.io.*; 

class area{
	
	public static void main (String[] args) throws IOException{
		
		Scanner scan = new Scanner(System.in); 
		int N = scan.nextInt(); 
		int areaRec[] = new int[N];
		areaRec[0] = scan.nextInt();
		
		for(int i = 1; i < N; i++){
			areaRec[i]= scan.nextInt();
		}
		int max = 0; 
		for(int i = 0, a = 1; i < N; i++){
			for(int d = i+1; d < N && areaRec[d] >=areaRec[i]; a++, d++);
			for(int d = i-1; d >= 0 && areaRec[d] >= areaRec[i]; a++, d--);
			if(max < (areaRec[i]*a)){
				max = areaRec[i]*a;
			}
			a = 1; 
		}
		System.out.println(max);
	}
}









/*Arrays.sort(height);
		for(int i = 0; i < N; i++){
			temp = height[i]*(N-i);
			if(temp > max){
				max = temp; 
			}
		}*/
			/*if(big < height[i][0])
				big = height[i][0];
			if( small > height[i][0])
				small = height[i][0];*/