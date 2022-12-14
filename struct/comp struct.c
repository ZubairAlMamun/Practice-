#include<stdio.h>
struct comp{
    double real;
    double img;
};
void pcomp(struct comp c){
    printf("%.1lf +i%.1lf",c.real,c.img);

}
struct comp addcomp(struct comp a,struct comp b){
struct comp ans;
ans.real=a.real+b.real;
ans.img=a.img+b.img;
return ans;

};
int main(){
    struct comp c1={5,3};
    struct comp c2={-2.7,9.7};
    pcomp(addcomp(c1,c2));


return 0;
}
