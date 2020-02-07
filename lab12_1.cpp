#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[], int N, double B[]){
	B[2] = A[0];
	B[3] = A[0];
	double sum,yy=0,max,min;
	for(int i=0; i<N; i++){
		sum+=A[i];
		yy=yy+pow(A[i],2);
	}
	B[0]=sum/N;
	B[1]=sqrt((yy/N)-pow(sum/N,2));
	for(int j=0; j<N; j++){
		if(B[2]<A[j]) B[2]=A[j];
		else if(B[3]>A[j]) B[3]=A[j];
	}	
}