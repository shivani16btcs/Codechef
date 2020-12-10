#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--){
        long int N,D,R=0,p=0,q=0;
        int A[10000];
        scanf("%ld %ld",&N,&D);
        for(int i=0;i<N;i++){
            scanf("%d",&A[i]);
        }
        for(int i=0;i<N;i++){
            if(A[i]>=80||A[i]<=9){
                R=R+1;
            }
        }
        p=R/D;
        if(p*D<R)
        p=p+1;
        
        q=(N-R)/D;
        if(q*D<(N-R))
        q=q+1;
        
        printf("%ld\n",p+q);
        
        
        
    }
	return 0;
}

