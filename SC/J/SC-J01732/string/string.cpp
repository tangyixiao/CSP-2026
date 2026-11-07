#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	int sum=1;
	for(int i=2;i<=max(a,b);i++){
		while(a%i==0 &&b%i==0){
			a/=i;b/=i;
			sum*=i;
		}
		if(a<=1 ||b<=1)
		return sum;
	}
	return sum;
}
string s,c;
int a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	bool flag=0; char last;
	int n,g;
	cin>>n>>a[1]>>c[1]>>a[2]>>c[2];
	g=gcd(a[1],a[2]);
	for(int i=3;i<=n;i++){
		cin>>a[i]>>c[i];
		g=gcd(g,a[i]);
	} last=c[1];
	for(int i=1;i<=n;i++){
		if(last!=c[i]) flag=1;
		a[i]/=g;
		while(a[i]--)
			s+=c[i];
		last=c[i];
	}
	if(!flag){
		cout<<0;
		return 0;
	}
	unsigned long long len=s.size(),ans=0;
	for(unsigned long long i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) ans++;
	}
	cout<<ans*g;
	fclose(stdin);
	return 0;
} 
