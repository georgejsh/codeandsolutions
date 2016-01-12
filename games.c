//not working
//www.spoj.com/problems/GAMES
#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
 if(a==0)
  return b;
 if(b==0) return a;
 if(b>a)
  return gcd(b,a);
 if(a%b==0)
  return b;
  return gcd(b,a%b);
}
int main()
{
	int t,i,num,val;
	double d;
	for(scanf("%d",&t);t;t--) 
	{
		scanf("%lf",&d);
		num=d*10000;
		val=gcd(10000,num);
		printf("%d\n",10000/num);
	}
	return 0;
}
