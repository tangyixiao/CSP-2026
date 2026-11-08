#include <bits/stdc++.h>
using namespace std; 
const int N=1e7+1;
long long n,m,a[N],x;
string s[N],v;
int maxc(string a,string b){
	int sum=0;
	for(int i=0;i<int(min(a.size(),b.size()));i++){
		if(a[i]==b[i])v+=a[i];
	}
	for(int i=0;i<int(v.size());i++){
		int k=v.size()-i-1,z=1;
		while(k--)z*=2;
		sum+=z*int(v[i]-48);
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i];
		while(x){
			s[i]=char(x%2+48)+s[i];
			x/=2;
		}
	}
	sort(a+1,a+n+1);
	if(m==1)cout<<0;
	else if(m==2){
		int ma=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				v="";
				ma=max(ma,maxc(s[i],s[j]));
			}
		} 
		cout<<ma;
	}else cout<<a[n/2+1];
	return 0;
}

