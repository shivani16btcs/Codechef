#include <stdio.h>

int main(void) {
    int D1 , V1, D2, V2,P,d=0,nd=0;
    scanf("%d%d%d%d%d",&D1,&V1,&D2,&V2,&P);
    if(P==0)
    printf("%d",d);
    else{
        int Db=D1>D2?D1-D2:D2-D1;
        int Vb=(D1>D2)>0?V2:V1;
        if(P<=Db*Vb){
            d=P/Vb;
            if(d*Vb<P)
            d=d+1;
           
        }
        else{
            int aage=(P-Db*Vb)/(V1+V2);
            d=Db+aage;
            if(((Db*Vb)+aage*(V1+V2))<P)
            d=d+1;
            
        }
        
        //days till no vaccine in market
        nd=D1<D2?D1-1:D2-1;
        printf("%d",d+nd);
        
    }
   
    
    
	return 0;
}

