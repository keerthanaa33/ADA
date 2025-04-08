#include<stdio.h>
int n;
int a[10][10];
int p[10][10];

void write_data()
{
    printf("Path matrix:\n");
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        printf("%d",p[i][j]);
    }
    printf("\n");
}
}
void read_data()
{
    printf("Enter the number of nodes");
    scanf("%d",&n);
    printf("Enter adjacency matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
}
void path_matrix()
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
        p[i][j]=a[i][j];
    }
}

for(int k=0;k<n;k++)
{
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
   {
    if(p[i][k]==1 && p[k][j]==1)
    {
        p[i][j]=1;
    }
    }
}}}
void main()
{
 read_data();
 path_matrix();
 write_data();
}
