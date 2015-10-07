
import java.util.ArrayDeque; 
import java.util.Deque; 

public class SlidingWindow { 
 public static void maxSlidingWindow(int A[], int n, int w, int B[]) { 
     Deque<Integer> Q = new ArrayDeque<Integer>(); 

    for (int i = 0; i < w; i++) { 
	    while (!Q.isEmpty() && A[i] >= A[Q.getLast()]) 
            Q.pollLast(); 
            Q.offerLast(i); 
     } 

       for (int i = w; i < n; i++) { 

            B[i - w] = A[Q.getFirst()];

          while (!Q.isEmpty() && A[i] >= A[Q.getLast()]) 

               Q.pollLast(); 


          while (!Q.isEmpty() && Q.getFirst() <= i - w) 

          Q.offerLast(i); 

     } 

       B[n - w] = A[Q.getFirst()]; 

 } 

   public static void main(String args[]) { 

        int w ; 

      int a[]=new int[1000000];
	   

     int b[] = new int[a.length - w + 1]; 

        maxSlidingWindow(a, a.length, w, b); 

        System.out.println("Sliding Window Maximum is "); 


       for (int i = 0; i < b.length; i++) { 

         System.out.print(b[i] + ","); 

       } 

   } 

} 

