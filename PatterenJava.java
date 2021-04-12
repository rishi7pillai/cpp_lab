import java.util.*;

public class Main
{
   
	public static void main(String[] args) {
	    for(int i=0;i<5;i++){
	        for(int j=5;j>i+1;j--){
	            System.out.print(" ");
	        }
	        if(i%2==0){
	            for(int j=0;j<=i/2;j++){
	            System.out.print(i-j+1+" ");
	          }
	          
	          for(int j=(i/2)+1;j<=i;j++){
	            System.out.print(i-j+3+" ");
	          }
	          
	        }
	
	        System.out.println();
	    }
	}
}



output

    1 
   
  3 2 3 
 
5 4 3 4 3 
