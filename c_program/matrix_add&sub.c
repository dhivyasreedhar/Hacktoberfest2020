#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],add[2][2],sub[2][2],i,j;
    printf("Enter Matrix 1:");
    for( i=0;i<2;i++)
    for( j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    
    printf("Enter Matrix 2:");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);

    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {add[i][j]=a[i][j]+b[i][j];
    sub[i][j]=a[i][j]-b[i][j];
    }

    
    printf("The added matrix is:");
    for(i=0;i<2;i++)
    {printf("\n");
      { for(j=0;j<2;j++)
    printf("%d ",&add[i][j]);} }

     printf("The subtracted matrix is:");
    for(i=0;i<2;i++)
    {printf("\n");
      { for(j=0;j<2;j++)
    printf("%d ",&sub[i][j]);} }

    
    
    
}