
#include <stdio.h>

int main(){

int v1, v2, v3, v4, v5;
char c1, c2, c3, c4, c5;

v1 = 10;
v2 = 20;
v3 = 30;
v4 = 40;
v5 = 50;
c1 = 'a';
c2 = 'b';
c3 = 'c';
c4 = 'd';
c5 = 'e';

printf("%d ", v2 >= v1 || (v1 == v2 && v4 == v5));
printf("%d ", c1 == 'a' && c2 == 'b' && c3 == 'd');
printf("%d ", v1 == 10 && v2 == 20 || v3 == v5);
printf("%d ", v3 == v5 || v1 == 10 && v2 == 20 );
printf("%d ", 15 > v1 && 15 < v2);

}
