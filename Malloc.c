#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int* ptr;

    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);

    }
     for(i=0;i<n;i++){
        printf("%d th position > %d\n",i,*(ptr+i));

    }
    return 0;

}
