#include<bits/stdc++.h> 
using namespace std;
long long n,m,a[211111],wei=9223372036854775807,maxs=-100,maxx=-100,book[211111];

long long sss(long long x,long long y){
	long long sum=0;
	string s1,s2,s;
 
	while(x||y){
		s1+=(char)(x%2+48);
		s2+=(char)(y%2+48);		
		x/=2;
		y/=2;
	}
	for(int i=0;i<max(s1.size(),s2.size());i++){
		s+=(char)((((int)(s1[i]-48))&&((int)(s2[i]-48)))+48);
		
	}

	for(int i=0;i<s.size();i++){
		
		sum+=(int)(pow(2,i))*((int)(s[i]-48));
		
	}
	return sum; 
}
void ss(long long id,long long w){
	if(id==m){
		maxx=max(maxx,w);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!book[i]){
			book[i]=1;
			ss(id+1,sss(w,a[i]));
			book[i]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxs=max(maxs,a[i]);
	}
	if(m==1){
		cout<<maxs;
		return 0;
	}
	if(n==m){
	
		for(int i=1;i<=n;i++){
			wei=sss(wei,a[i]);
		}
		cout<<wei;
		return 0;
	}
	ss(0,9223372036854775807);
	cout<<maxx;
	return 0;
}
