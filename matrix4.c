

#include<stdio.h>
void main()
{
  int a[2][2],b[2][2],i,j,k,z[2][2];
  printf("enter elements of a 2x2 matrix\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  printf("enter elements of b 2x2 matrix\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          scanf("%d",&b[i][j]);
      }
  }
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          z[i][j]=0;
          for(k=0;k<2;k++)
          {
              z[i][j]=z[i][j]+a[i][k]*b[k][j];
          }
      }
  }
  printf("multiplication of matrices are\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          printf("%d ",z[i][j]);
      }
      printf("\n");
  }
}
