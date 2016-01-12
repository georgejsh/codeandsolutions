#include<stdio.h>
#define ll long long int
ll gcd(ll a,ll b)
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
 int t;
 ll n,r;
 for(scanf("%d",&t);t;t--) {
  scanf("%lld",&n);
  for(r=n/2;r>1;r--) {
   if(gcd(r,n)==1)
    break;
  }
  printf("%lld\n",r);
 }
 return 0;
}
