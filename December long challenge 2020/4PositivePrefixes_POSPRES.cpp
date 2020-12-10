#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        int N,K,A[10000],c=0;
        scanf("%d  %d",&N,&K);
        c=N-K;
        for(int i=0;i<N;i++){
         
         A[i]=i+1;
    
        }
         for(int i=N-1;i>=0;i--){
             if(c)
            { A[i]=(-1)*A[i];
            c--;
            }
            
         }
         
         for(int i=0;i<N;i++){
              printf("%d ",A[i]);
         }
      printf("\n");     
    }
    
	return 0;
}

