#include <stdio.h>
int a[20][20],n,i,w[20],j=0,tat[20],k=0,wait[20];float avg,avg1,avg2;
void main()
{
    printf("Enter no. of processes");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter ARRIVAL no.");
         scanf("%d",&a[i][0]);
          printf("Enter CPU time ");
         scanf("%d",&a[i][1]);
         
    }
     
     for(i=1;i<=n+1;i++){
        if(i==1) {
            w[i]=0;
        }
        else {
          j=j+a[i-1][1];
          w[i]=j;
        }
         
    }
    j=0;
    for(i=1;i<=n;i++){
        tat[i]=w[i+1]-a[i][0];
        k=k+tat[i];
    }
   

    k=0;
    for(i=1;i<=n;i++){
        wait[i]=tat[i]-a[i][1];
        k=k+tat[i];
    }
    j=0;k=0;
    
     for(i=0;i<=n;i++){
         printf(" TAT= %d   WT=%d \n",tat[i],wait[i]);
         j=j+tat[i];
         k=k+wait[i];
     }
     avg1=j/n;
     avg2=k/n;
         printf("Avg turn around  time %f \n",avg1);
          printf("Avg waiting  time %f \n",avg2);
    
}