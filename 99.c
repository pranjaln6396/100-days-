#include <stdio.h>
int main(){
    int d,m,y;
    char *mon[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    scanf("%d/%d/%d",&d,&m,&y);
    printf("%02d-%s-%d",d,mon[m-1],y);
}
