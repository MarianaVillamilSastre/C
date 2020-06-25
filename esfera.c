#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){


FILE*myfile;
myfile=fopen("Esfera.txt","w");

double x;
double y;
double z;
double x_1;
double y_1;
double z_1;
int i;
int radio=4;

do
{
	x=8*drand48()-4;
	y=8*drand48()-4;
	z=8*drand48()-4;
	x_1=pow(x,2);
	y_1=pow(y,2);
	z_1=pow(z,2);
	
	if((x_1+y_1+z_1)<=16.0){

	fprintf(myfile, "%f , %f , %f\n ",x,y,z);
	i=i+1;}
}
while(i< 3000);
}
