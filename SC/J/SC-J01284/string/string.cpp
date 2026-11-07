#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+10;
long long ljy[MAXN],zjk[MAXN];
char c[MAXN];//ACACACACACACACACACAACACACACACACAKAKAK
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>ljy[i];
		cin>>c[i];
		zjk[i]=zjk[i-1]+ljy[i];
	}
	long long len=zjk[n];
	long long half=0;
	if(len%2==0) half=len/2;
	else half = (len+1)/2;
	long long pos=n/2;
	for(long long i=1;i<=n;i++)
	{
		if(zjk[i]>half)
		{
			pos=i;
			break;
		}
	}
	long long cnt=0;
	for(long long i=1,j=n;i<=pos&&j>=pos;)
	{
		if(ljy[i]<ljy[j])
		{
			if(c[i]!=c[j])
				cnt+=ljy[i];
			ljy[j]-=ljy[i];
			i+=1; 
		}
		else if(ljy[i]>ljy[j])
		{
			if(c[i]!=c[j])
				cnt+=ljy[j];
			ljy[i]-=ljy[j];
			j-=1; 
		}
		else if(ljy[i]==ljy[j])
		{
			if(c[i]!=c[j])
				cnt+=ljy[i];
			ljy[j]-=ljy[i];
			i+=1;
			j-=1; 
		}
	}
	cout<<cnt<<endl;
	return 0;
}