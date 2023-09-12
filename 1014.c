#include <stdio.h>;

int main(){
    int x;
    int y, consumo;

    scanf("%d\nlf", &x, &y);

    consumo = x/y;

    print("%.3lf km/l\n", consumo);

    return 0;

}