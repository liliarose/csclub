import java.util.*; 
import java.io.*;

class Point implements Comparable<Point>{
		int coordinate;
		int value; 
		Point(int a , int b){
			coordinate = a;
			value = b; 
		}
		public int compareTo(Point other){
			if(coordinate > other.coordinate) return 1; 
			if(coordinate < other.coordinate) return -1;
			if(value> other.value) return -1; 
			if(value < other.value) return 1; 
			return 0; 
		}
		public String toString(){
			return "("+coordinate+", "+ value+")"; 
		}
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();
		int M = scan.nextInt();
		Point[] points = new Point[N*4];

		int maxOverlap =0, temp =0, count =0;
		for(int i = 0, c, d; i<N; i++){
			c = scan.nextInt(); 
			d = scan.nextInt();
			if(c< d){
				points[count] = new Point(c, 1);	count++; 
				points[count] = new Point(d, -1);	count++; 
			}
			else{
				points[count] = new Point(0, 1);	count++; 
				points[count] = new Point(d, -1); 	count++; 
				points[count] = new Point(c, 1);	count++; 
				points[count] = new Point(M, -1);	count++;
			}
			
		}
		Arrays.sort(points, 0, count);
		
		for(int i=0; i<count; i++){
			temp += points[i].value; 
			if(temp > maxOverlap){
				maxOverlap = temp;
			}				
		}
		
		System.out.println(maxOverlap);
		System.exit(0);
	}
}