
//www.spoj.com/problems/GAMES
#include<stdio.h>
#include<math.h>
long long int gcd(long long int a,long long int b)
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
	int t,i,flag;
	long long int num,val,num2;
	char d[100];
	for(scanf("%d",&t);t;t--) 
	{
		scanf("%s",d);
		for(i=0,num=0,flag=1,num2=1;d[i]!='\0';i++)
			if(d[i]!='.' && flag)
			{
 			  num=num*10+(d[i]-48);
			}
			else if(d[i]!='.')
			{
			  num=num*10+(d[i]-48);
			  num2*=10;
			}
			else 
			  flag=0;	
		//num calculate the number removing the decimal point
		//num2 finds the number of digits after . multiplied by 10
		val=gcd(num2,num);
		printf("%lld\n",num2/val);
	}
	return 0;
}
