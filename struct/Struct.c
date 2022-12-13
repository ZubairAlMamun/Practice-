#include<stdio.h>
struct Student{
    int roll;
    int id;
    float result;
    char name[20];

};
int main(){

    struct Student s ={01,1102,4.00,"Zubair Al Mamun"};
    struct Student s1 ={02,1103,3.9,"Zubair Mamun"};

    printf("Name =%s\n",s.name);
    printf("student id =%d\n",s.id);
    printf("student result =%.2f\n",s.result);
    printf("student roll =%d\n\n",s.roll);

    printf("Name =%s\n",s1.name);
    printf("student id =%d\n",s1.id);
    printf("student result =%.2f\n",s1.result);
    printf("student roll =%d\n\n",s1.roll);


    return 0;
}
