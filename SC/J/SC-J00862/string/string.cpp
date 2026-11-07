#include <bits/stdc++.h>
using namespace std;
int n;
int a[100086];
char st[100086];
char st2[1000086];
long long s,sum,sum2,s1,s2,q=1;
long long minn(long long a,long long b)
{
	if(a>=b) return b;
	else return a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>st[i];
	    s=s+a[i];
	    for(int j=1;j<=a[i];j++)
	    {
	    	st2[q]=st[i];
	    	q++;
		}
	}
	int cont=ceil(s*1.0/2);
	int i=1;
	while(st2[cont+i]==st2[cont-i]&&st2[cont+i]>='a'&&st2[cont+i]<='z')
	{
		sum=sum+2;
		i++;
	 }  
	 cout<<ceil((s-sum)*1.0/2)-1;
	return 0;
}