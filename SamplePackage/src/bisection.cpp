#include<assert.h>
#include"rootsolvers.h"

void rootSolve_bisect(double(*func_f)(const double&), double xL, double xR, double& x){
	// requirements: xL<xR, f(xL)*f(xR)<0
	const double 	tol 	= 1.0e-8;
	double 			res 	= 2.0*tol;
	const double 	s 		= func_f(xL);
	assert(xL<xR);
	assert(func_f(xL)*func_f(xR)<0.0);
	while(res*res>tol*tol){
		x 	= 0.5*(xL+xR);
		res = func_f(x);
		if(res*s>0.0){
			xL 	= x;
		}else{
			xR 	= x;
		}
	}
}