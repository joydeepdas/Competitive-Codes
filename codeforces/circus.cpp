#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;


int main(){
	double Ax,Bx,Cx,Ay,By,Cy,area;
	scanf("%f",&Ax);
	scanf("%f",&Ay);
	scanf("%f",&Bx);
	scanf("%f",&By);
	scanf("%f",&Cx);
	scanf("%f",&Cy);
	area=Ax*(By-Cy)+Bx*(Cy-Ay)+Cx*(Ay-By)/2;
	
	if(area<0){
		area=area*-1;
	}
	printf("%f",area);
	}
