//getting TLE on this solution 


#include <iostream>
#include <bits/stdc++.h>
#include <math.h> 

using namespace std;
int setBitNumber(long int n) 
{ 
    if (n == 0) 
        return 0; 
    
    long long bt = 1;
    
    for(int i = 31; i >= 0; i--)
    {
        int bit = (n & (1<<i));
        
        if(bit != 0)
        {
            return (1<<i);
        }
    }
    return -1; 
} 

void swap(long int *a,long int *b){
    int t=*a;
    *a=*b;
    *b=t;
}


int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    long int N,X,A[1000],J[1000],JL=0;
	    scanf("%ld %ld",&N,&X);
	    for(int i=0;i<N;i++){
	        scanf("%ld",&A[i]);
	    }
	   for(int i=0;i<N;i++){
	       int testmin=0,MSBcheck=0;
	       while(testmin==0){
	            if(A[i]==0)break;
	           int msb=setBitNumber(A[i]);
	        //   printf("(msb%d %d  ",i+1,msb);
	           int got=0;
	           if(got==0){
	             for(int m=0;m<JL;m++){
	               if(J[m]==msb)
	               {
	                 got=1;
	                 swap(&J[m],&J[JL-1]);
	                 JL=JL-1;
	                 break;
	               }
	              }  
	           }// for J loop
	           if(got==0&&X>0){
	               got=1;
	               X--;
	               J[JL++]=msb;
	           }
	           
	           if(got==0){
	           int Q=A[i];//for next msb
	            while(Q/2!=0&&got==0){
	                Q=Q/2;
	                int localmsb=setBitNumber(Q); 
	                for(int m=0;m<JL;m++){
    	               if(J[m]==localmsb&&A[i]>(A[i]^localmsb))
    	               {
    	                 got=1;
    	                 msb=localmsb;
    	                 swap(&J[m],&J[JL-1]);
    	                 JL=JL-1;
    	                 break;
    	               }
	                } 
	            }
	           }//for next msb case
	           if(got==1){
	            A[i]=A[i]^msb;
	           }
	           if(i==N-1&&JL>0){
	               while(JL>0){
	                   msb=J[JL-1];
	                   A[i]=A[i]^msb;
	                   JL=JL-1;
	                  // printf("J%d ",JL);
	               }
	           }
	           if(A[i]==0||X<=0&&got==0)
	           testmin=1;
	       // printf("A:%d testmin:%d) ",A[i],testmin);
	       }//while loop
	      printf("%ld ",A[i]);     
	   }//main for
	   printf("\n");
	   }//while
	   
	return 0;
}


