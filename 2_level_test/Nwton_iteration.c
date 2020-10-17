#include<stdio.h>
#include<math.h> 
int main()
{
	double m,n,a,b,c,d,x,x1=1;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	m=a*x1*x1*x1+b*x1*x1+c*x1+d;
	n=3*a*x1*x1+2*b*x1+c;//n是m的导数 
	x=x1-m/n;
	while(fabs(x-x1)>1e-5)
	{
		x1=x;
		m=a*x*x*x+b*x*x+c*x+d;
	    n=3*a*x*x+2*b*x+c;
		x=x-m/n;
	}
	printf("%lf",x);
	return 0;
 } 
