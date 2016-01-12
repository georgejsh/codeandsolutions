#include<stdio.h>
#define ull long long int
ull eval(int a[],int n,int b) {
 ull ans=a[0];
 int i;
 for(i=1;i<=n;i++)
  ans=ans*b+a[i];
 return ans;
}

int main()
{
 ull ans;
 int i,n,k;
 int a[1000],b,t=0;
 while(1) {
  scanf("%d",&n);
  if(n==-1)
   break;
  printf("Case %d:\n",++t);
  for(i=0;i<=n;i++)
   scanf("%d",&a[i]);
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
   scanf("%d",&b);
   ans=eval(a,n,b);
   printf("%lld\n",ans);
  }
 }
 return 0;
}
