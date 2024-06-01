#include<stdio.h>
void main ()
{
 int A[10][10], B[10][10], C[5][5];
 int R1, C1 , R2 , C2, i, j ,k ;
 printf("Enter matrix dimensions between 1 to 5 \n\n");
 printf("Enter First matrix dimensions\n\n");
 printf("Enter row dimension -- ");
 scanf("%d",&R1);
 printf("Enter column dimension -- ");
 scanf("%d",&C1);
 printf("Enter Second matrix dimension\n\n");
 printf("Enter row dimension -- ");
 scanf("%d",&R2);
 printf("Enter column dimension -- ");
 scanf("%d",&C2);
 if (C1==R2){
 printf("\n\nEnter First matrix elements\n\n");
 for (i=0; i<R1;i++){
 for(j=0; j<C1; j++)
 scanf("%d", &A[i][j]);
 }
 printf("\n\nFirst matrix elements are \n\n");
 for (i=0; i<R1;i++){
 for(j=0; j<C1; j++)
 printf("%d", A[i][j]);
 printf("\n");
 }
 printf("\n\nEnter second matrix elements\n\n");
 for (i=0; i<R2;i++){
 for(j=0; j<C2; j++)
 scanf("%d", &B[i][j]);
 }
 printf("\n\nsecond matrix elements are \n\n");
 for (i=0; i<R2;i++){
 for(j=0; j<C2; j++)
 printf("%d", B[i][j]);
 printf("\n");
 }
 printf("\n\nAfter multiplication matrix elements are\n\n");
 for (i=0; i<R1;i++){
 for(j=0; j<C2; j++){
 C[i][j] = 0;
 for(k=0 ; k<C1 ; k++){
 C[i][j] = C[i][j] + A[i][k]*B[k][j];
 }
 printf("%d ", C[i][j]);
 }
 printf("\n");
 }
 }
 else{
 printf("\n\nAfter multiplication matrix elements are\n\n");
 }
}
