#include<bits/stdc++.h>
using namespace std;
long long a[10000000];
char c[10000000];
int main()
{
	freopen("string.in","r","in");
	freopen("string.out","w","out"); 
    long long n,num=0,sum=0;
    long long a1=0,a2=0,ans;
    int t=0,g=0;
    char f;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>c[i];
	}
	for(int i=2;i<=n;i++)
	{
		if(c[i]==c[i-1])t++;
	}
	if(t==(n-1)){
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
	   if(a[i]<=a[i-1])
	   {
	   	num=a[i];
	   	f=c[i];
	   }
	   sum+=a[i];
    }
    for(int i=1;i<=n;i++)
    {
    if(c[i]==f)g++;	
	}
	num*=g;
    a1=num;
    a2=(sum-num)/(n-1);
   if(n&2!=0)
   {
   	ans=a2;
   }
   else{
   	 ans=a1;
   	 //cout<<a1<<" "<<a2<<" "<<g<<" "<<num; 
   }
	cout<<ans;
	return 0;
}