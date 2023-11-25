#include<stdio.h>
void selectsort(int a[],int n)
{
int i,j,large,index;

    for(i=n-1;i>0;i--)
    {
    large=a[0];
    index=0;
    for(j=1;j<=i;j++)
    {
        if(a[j]>large)
        {
            large=a[j];
            index=j;
        }
    }
    a[index]=a[i];
    a[i]=large;
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
        printf("%d\t\n",a[i]);
    }
    printf("Array after sorting\n");
    selectsort(a,n);
}
