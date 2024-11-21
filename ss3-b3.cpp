#include <stdio.h>

int main(){
	int r;
	scanf("%d", &r);
    float Pi = 3.14;
    float chu_vi = 2 * Pi * r;
    float dien_tich = Pi * r * r;
    printf("Chu vi la: %.2f\n", chu_vi);
    printf("Dien tich la: %.2f", dien_tich);
	return 0;
}
