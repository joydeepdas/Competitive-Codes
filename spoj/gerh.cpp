
import java.util.ArrayDeque; 



02 
import java.util.Deque; 



03 
  



04 
public class SlidingWindow { 



05 
  



06 
 public static void maxSlidingWindow(int A[], int n, int w, int B[]) { 



07 
       Deque<Integer> Q = new ArrayDeque<Integer>(); 



08 
  



09 
       // Initialize deque Q for first window 



10 
      for (int i = 0; i < w; i++) { 



11 
            while (!Q.isEmpty() && A[i] >= A[Q.getLast()]) 



12 
               Q.pollLast(); 



13 
           Q.offerLast(i); 



14 
     } 



15 
  



16 
       for (int i = w; i < n; i++) { 



17 
            B[i - w] = A[Q.getFirst()]; 



18 
  



19 
         // update Q for new window 



20 
          while (!Q.isEmpty() && A[i] >= A[Q.getLast()]) 



21 
               Q.pollLast(); 



22 
  



23 
           // Pop older element outside window from Q 



24 
          while (!Q.isEmpty() && Q.getFirst() <= i - w) 



25 
                Q.pollFirst(); 



26 
  



27 
          // Insert current element in Q 



28 
          Q.offerLast(i); 



29 
     } 



30 
       B[n - w] = A[Q.getFirst()]; 



31 
 } 



 
  



 
   public static void main(String args[]) { 



 
        int w = 3; 




      int a[] = { 1, 3, -1, -3, 5, 3, 6, 7 }; 



 
     int b[] = new int[a.length - w + 1]; 



 
  




        maxSlidingWindow(a, a.length, w, b); 



 
          




        System.out.println("Sliding Window Maximum is "); 




       for (int i = 0; i < b.length; i++) { 




         System.out.print(b[i] + ","); 



 
       } 



 
  



 
   } 




} 

