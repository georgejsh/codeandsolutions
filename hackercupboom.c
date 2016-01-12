#include<iostream>
using namespace std;
#include<stdio.h>
#include<map>
int main() 
{
 int t,n,i,j,ca;
 long long int res,temp;
 int a[2000],b[2000];
 map<long long int,int> data;
 for(scanf("%d",&t),ca=0;ca<t;ca++)
 {
  for(scanf("%d",&n),i=0;i<n;i++)
   scanf("%d%d",&a[i],&b[i]);
  res=0;
  for(i=0;i<n;i++)
  {
   data.clear();
   for(j=0;j<n;j++)
   {
    temp=(a[i]-a[j])*((a[i]-a[j])*1L)+(b[i]-b[j])*((b[i]-b[j])*1L);
    data[temp]++;
    if(data[temp]>1)
     res+=data[temp]-1;
   }
  }
  printf("Case #%d: %lld\n",ca+1,res);
 }
 return 0;
}
