#include <stdio.h>
#include <math.h>

int main(){
	printf("请输入圆柱体的底面积半径和高"); 
	double r,h,V,S,pai;
	pai=3.1415926;
	scanf("%lf%lf",&r,&h);
	S=pai*r*r*2.0+2.0*pai*r*h;
	V=pai*r*r*h;
	printf("圆柱体的表面积和体积分别为%lf\n%lf",S,V);
	return 0;
}
