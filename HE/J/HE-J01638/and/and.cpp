#include<bits/stdc++.h>
using namespace std;
int anweiyu(long long a,long long b){
	int sum=0;
	string s;
	long long x=min(a,b),y=max(a,b);
	long long l=0;
	while(x!=0)
	{	
		l+=1;
		if ((x%2==y%2)&&(x%2==1))
			s[l]='1';
		else	
			s[l]='0';
		x/=2,y/=2;
		
	}
	for (int j=l;j>=1;j-=1)
	{
		sum+=(s[j]-'0')*pow(2,j-1);
	}
	return sum;

}	
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long  n,m;
	cin>>n>>m;
	long long sz[n+1];
	for (int i=1;i<=n;i+=1)
		cin>>sz[i];
	sort(sz+1,sz+n+1,greater<int>());
	int ans=anweiyu(sz[1],sz[2]);
	for (int i=3;i<=m;i+=1)
		ans=anweiyu(ans,sz[i]);
	cout<<ans;
	return 0;
}
