#include <stdio.h>
#include <math.h>

int main(){
	printf("������Բ����ĵ�����뾶�͸�"); 
	double r,h,V,S,pai;
	pai=3.1415926;
	scanf("%lf%lf",&r,&h);
	S=pai*r*r*2.0+2.0*pai*r*h;
	V=pai*r*r*h;
	printf("Բ����ı����������ֱ�Ϊ%lf\n%lf",S,V);
	return 0;
}
