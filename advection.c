#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(void){
float c=1.0;
double dt=pow(10,-3);
double dx=4.0/1000.0;
int nx=1000.0;
int nt=700.0;

double * u=malloc(nx*sizeof(double));
double * u_inicial=malloc(nx*sizeof(double));
double * u_siguiente=malloc(nx*sizeof(double));
int i;
for(i=0;i<nt;i++){
	double x =-2.0 + i*dx;
	if(fabs(x) <=0.5){
		u_inicial[i]=(-pow(x,2))+ 0.25;}
	else{
		u_inicial[i]=0;}
}
for(i=0; i<nx; i++){
	u[i] = u_inicial[i];}
int j;
for(j=1;j<nt-1;j++){
	u[0]=u_siguiente[0];
	u[nx-1]=u_siguiente[nx-1];
	for (i=1;i<nx-1;i++){
	u_siguiente[i]=u[i] - c*dt/dx*(u[i]-u[i-1]);}


int m;
for(m=1;m<nx;m++){
	u[m]=u_siguiente[m];}
}
FILE* myfile=fopen("datos.dat","w");
for(i=0;i<nx;i++){
	fprintf(myfile,"%f %f\n",u_inicial[i],u_siguiente[i]);}

}


