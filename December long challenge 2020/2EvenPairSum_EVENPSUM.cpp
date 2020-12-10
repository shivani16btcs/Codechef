#include <stdio.h>

int main(void) {
    long int T;
    scanf("%ld",&T);
    while(T--){
       long int A,B,e1,o1,e2,o2,tp=0;
       scanf("%ld %ld",&A,&B);
        if(A%2==0)
        {
            e1=o1=A/2;
        }
        else{
            e1=A/2;
            o1=A/2+1;
        }
        
        if(B%2==0)
        {
            e2=o2=B/2;
        }
        else{
            e2=B/2;
            o2=B/2+1;
        }
        
        tp=e1*e2+o1*o2;
        printf("%ld\n",tp);
        
    }
	
	return 0;
}

