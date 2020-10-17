#include<stdio.h>
main()
{
	int a,b,n1,n2,m;
	int i=0;
	const char ch0="LING";
    const char ch1="YI";
    const char ch2="ER";
    const char ch3="SAN";
    const char ch4="SI";
    const char ch5="WU";
    const char ch6="LIU";
    const char ch7="QI";
    const char ch8="BA";
    const char ch9="JIU";
    printf("input a,b.");
	scanf("%d%d",&a,&b);
	while(a>b||a<-99||b>99)
	{
	printf("input error.");
	scanf("%d%d",&a,&b);
	}
	m=b-a;
	while(i<=m)
	{ 
	if(a==0)
	printf("LING\n");
	else
	{
      if(a/10==0&&a>0)
	  printf("a");
	  else
	  {
		if(a/10==0)
		printf("FU a");
		else
		{  
		  n1=a/10;n2=a%10;
		  if(a>0)
		  printf("n1 SHI n2");
		  else
		  printf("FU n1 SHI n2");
		}
      }
    i=i+1;a=a=1; 
    }
   }
    return 0;
}
