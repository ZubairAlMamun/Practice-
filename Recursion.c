#include<stdio.h>
//-------------32-6
int solve(int arr[],int n)
{
    if(n==0)return 0;
    int sum=solve(arr+1,n-1);
    return sum+arr[0];

}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=solve(arr,n);
    printf("%d",s);
    return 0;
}


/*--------32-5
int solve(int arr[],int i,int n)
{
    if(i>n)return 0;
    int sum=solve(arr,i+1,n);
    return sum+arr[i];

}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s=solve(arr,i,n);
    printf("%d",s);
    return 0;
}
---------*/


/*--------32-4
int solve(int i,int n)
{
    if(i>n)return 0;
    int sum=solve(i+1,n);
    return sum+i;

}
int main()
{
    int n;
    scanf("%d",&n);
    int s=solve(1,n);
    printf("%d\n",s);
    return 0;
}
---------*/

/*--------32-3
void solve(int i,int n)
{
    if(i>n)return;
    solve(i+1,n);
    printf("%d\n",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}
----------*/

/*--------32-2
void solve(int n)
{
    if(n<1)return;
    printf("%d\n",n);
    solve(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}
---------*/

/*--------32-1
void solve(int i,int n)
{
    if(i>n)return;
    printf("%d\n",i);
    solve(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}
--------*/
