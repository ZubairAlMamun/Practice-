#include<stdio.h>
struct Student{
int roll;
char name[50];
float number;
};
int main(){
    int i;
    struct Student arr[5];
    for(i=0;i<5;i++){
        scanf("%d",&arr[i].roll);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].number);
    }
     for(i=0;i<5;i++){
            printf("Information of Student %d\n",i);
        printf("Roll ->%d\n",arr[i].roll);
        printf("Name ->%s\n",arr[i].name);
        printf("Number ->%f\n",arr[i].number);
        printf("\n");
    }


    return 0;
}
/*
1
Zubair
50.6
2
Razibul
60.5
3
Asmaul
70.3
4
Shuvro
70.9
5
Mamun
80.6
*/
