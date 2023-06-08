/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a1,a2,b1,b2,a[100][100],b[100][100],r[100][100],i,ch,j,k;
void addm();
void transp(int a[100][100],int a1, int a2);
void mulm();
void subm();

int main()
{
    
    printf("Enter the order of A");
    scanf("%d %d",&a1,&a2);
     printf("Enter the order of B");
    scanf("%d %d",&b1,&b2);
   
    printf("Enter A");
    for(i=0;i<a1;i++)
    {
        for(j=0;j<a2;j++){
            printf("Enter %d , %d th element",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    
     printf("Enter B");
    for(i=0;i<b1;i++)
    {
        for(j=0;j<b2;j++){
            printf("Enter %d , %d th element",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("1.Addition 2.Multiplication 3. Transpose 4. Subtraction");
     printf("Enter your choice");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:
        if(a1==b1 && a2==b2){
            printf("Add compatible");
            addm();
        }
        else {
              printf("Not Add compatible"); 
        }
        break;
        
        case 2: {
            if(a2==b1){
              printf("Multiplication compatible");
            mulm();  
            }
            else {
                printf("Not Multiplication compatible");  
            }
        }
        break;
        case 3:
        {
           printf("Transpose is"); 
           transp(a,a1,a2);
           transp(b,b1,b2);
        }
        break;
        
        case 4:
        if(a1==b1 && a2==b2){
            printf("Sub compatible");
            subm();
        }
        else {
              printf("Not Sub compatible"); 
        }
        break;
        
        default:
        printf("Wrong choice"); 
        
    }
    return 0;
}

void addm(){
    for(i=0;i<a1;i++){
        for(j=0;j<a2;j++){
            r[i][j]=a[i][j]+b[i][j];
        }
    }
    
    printf("Matrix after addition");
    printf("\n");
     for(i=0;i<a1;i++){
        for(j=0;j<a2;j++){
           printf("%d  ",r[i][j]);
        }
        printf("\n");
    }
    
    
}

void subm(){
    for(i=0;i<a1;i++){
        for(j=0;j<a2;j++){
            r[i][j]=a[i][j]-b[i][j];
        }
    }
    
    printf("Matrix after Subtraction");
    printf("\n");
     for(i=0;i<a1;i++){
        for(j=0;j<a2;j++){
           printf("%d  ",r[i][j]);
        }
        printf("\n");
    }
    
    
}

void transp(int a[100][100],int a1, int a2){
     for(i=0;i<a1;i++){
        for(j=0;j<a2;j++){
            r[i][j]=a[j][i];
        }
    }
    
     printf("Matrix after Transposing ");
      printf("\n");
     for(i=0;i<a1;i++){
          printf("\n");
        for(j=0;j<a2;j++){
            
           printf("%d ",r[i][j]);
        }
        printf("\n");
    
}
}

void mulm(){
    for(i=0;i<a1;i++){
        for(j=0;j<b2;j++){
             r[i][j]=0;
            for(k=0;k<a2;k++){
                r[i][j]=r[i][j]+a[i][k]*b[k][j];
            }
        }
    }
     printf("\n");
    printf("Matrix after Multiplication ");
    printf("\n");
     for(i=0;i<a1;i++){
          
        for(j=0;j<b2;j++){
            
           printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    
}
