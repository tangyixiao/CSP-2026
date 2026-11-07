#include<bits/stdc++.h>
using namespace std;
string slx(int n){
	string s;
	while(n>0){
		if(n%2==0){
			s+='0';
			n/=2;
		}
		else{
			s+='1';
			n/=2;
		}
	}
	return s;
}
string lxr(string a,string b){
	long long l=min(a.length(),b.length());
	string c;
	for(int i=0;i<=l-1;i++)
		c+=min(a[i],b[i]);
	return c;
}
long long ds(long long n){
	long long a=1;
	for(int i=1;i<=n;i++)
		a*=2;
	return a;
}
string maxn;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long clxr[n+1];
	string cslx[m+1];
	int aaa=1;
	for(int i=1;i<=n;i++)
		cin>>clxr[i];
	for(int i=1;i<n;i++)
		for(int j=1;j<=n-i;j++)
			if(max(clxr[j],clxr[j+1])==clxr[j])
				swap(clxr[j],clxr[j+1]);
	for(int i=n-m+1;i<=n;i++){
		cslx[aaa]=slx(clxr[i]);
		aaa++;
	}
	for(int i=1;i<m;i++)
		cslx[i+1]=lxr(cslx[i],cslx[i+1]);
	maxn=cslx[m];
	long long sum=0;
	for(int i=0;i<maxn.length();i++)
		if(maxn[i]=='1'&&i==0)
			sum+=1;
		else if(maxn[i]=='1'&&i!=0)
			sum+=ds(i);
	cout<<sum;
	return 0;
}