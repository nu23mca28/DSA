#include<stdio.h>
void bs(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
int n,a[100],i;
printf("Enter the number of elements in an array\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Array after sorting\n");
    bs(a,n);


}
