#include <iostream> 
 #include <cstdio> 
 #include <vector> 
  #include <cstring> 
 #include <algorithm> 
 #include <cmath> 
 #include <sstream> 
 #include <map> 

using namespace std;
int main(){
	int n,t;int  majority_element =-10000, count = 0,count1=0;
	scanf("%i", &t);
	while(t--){count1=0;
	majority_element =-10000;count = 0;
		scanf("%i", &n);
		int a[n];
		for(int i=0;i<n;i++){
		scanf("%i", &a[i]);
		}
		
		for (int j=0;j<n;j++){

       		if (majority_element==a[j])
             		 { count++;}
       		else{
				count--;
                if (count < 0){
                     majority_element = a[j];
                     count = 0;
                 }
			}
		}
		for (int j=0;j<n;j++){
			if (majority_element==a[j])
             		 { count1++;}
             	}
             	
		if(count1>n/2){
			///cout<<"Yes"<<" "<<majority_element<<endl;
			//printf( "%i", 17 );
			printf("YES %d\n\n",majority_element);
			cout<<endl;
		}
		else{
			printf("NO\n\n");
			
		}
	}
}

