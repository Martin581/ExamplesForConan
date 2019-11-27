#include<iostream>
#include"rootsolvers.h"

double func_g(const double& x){
	return -7.0 + 10.3 * x + 0.001 * x*x*x;
}

int main(void){
	
	double xL=-3,xR=3,x;
	
	rootSolve_bisect(func_g,xL,xR,x);
	
	std::cout << "bisection root : " << x << std::endl;
	
	return 0;
}