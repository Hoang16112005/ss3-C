#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
	float avgPoint = (float)sum / 3;
    printf("Tong diem la: %d\n", sum);
    printf("Diem trung binh la: %.2f", avgPoint);
	return 0;
}
