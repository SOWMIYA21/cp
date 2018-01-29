#include<stdio.h>
int main()
{
int t;
cin>>t;
while(t--)
{
long long n,ans=1;
cin>>n;
for(long long i=1;i<=n;i++)
{
ans=ans*i;
}
cout<<ans<<"\n";
}
return 0;
}
