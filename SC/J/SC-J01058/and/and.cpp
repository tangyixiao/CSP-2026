#include<bits/stdc++.h>
using namespace std;
long long sum,n,m,c[200001],maxx=-1,t=0,f;
string d[200001],s[200001];
long long dp(long long x,long long y);
void an(string a,string b){
	if(a.length()>b.length()){
		for(int i=1;i<=b.length();i++){
			if(a[i]==0||b[i]==0)b[i]=0;
		}
		a=b;
		return;
	}
	else{
		for(int i=1;i<=a.length();i++){
			if(a[i]==0||b[i]==0)a[i]=0;
		}
		b=a;
		return;
	}
}
void dx(long long x,int num){
	while(x>0){
		s[num]+=x%2;
		x/=2;
	}
}
long long dp(long long x,long long y){
	long long bas1=x,su=y,all=1;
	while(y>0){
		if(y&1)all*=bas1;
		bas1*=bas1;
		y>>=1;
	}return all; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}sort(c+1,c+n+1);
	for(int i=1;i<=n;i++){
		while(c[i]>=dp(2,t)-1){
			if(c[i]==dp(2,t)-1)f=i;
			t++;
			if(c[i]==dp(2,t)-1)f=i;
		}
		if(c[i+1]==c[f])f=i+1;
	}t--; 
	if(m==1)cout<<c[n];
	else cout<<c[f-m+1];
	return 0;
	fclose(stdin);
	fclose(stdout);
} 