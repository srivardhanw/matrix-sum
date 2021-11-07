#include <stdio.h>
int funcReadMatrix(int x[15][15],int r,int c)
{
  int i,j;
  for(i=0 ;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d", &x[i][j]);
    }
  }
}
int funcSumMatrix(int a[15][15],int b[15][15],int r, int c)
{
  int i,j,sum ;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      sum = a[i][j] + b[i][j];
      printf("%d", sum);
      printf("\t");
    }
    printf("\n");
  }
}
int main()
{
  int a[15][15],b[15][15];
  int rows ,columns;
  printf("Enter the dimensions\n<rows> <columns>\n");
  scanf("%d%d",&rows,&columns);
  printf("Enter the elements of matrix A\n");
  funcReadMatrix(a,rows,columns);
  printf("Enter the elements of matrix B\n");
  funcReadMatrix(b,rows,columns);
  printf("The sum of the two matries\n");
  funcSumMatrix(a,b,rows,columns);
  return 0;
}
