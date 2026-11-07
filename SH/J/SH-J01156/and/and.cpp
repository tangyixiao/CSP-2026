#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,m,ai[20010]={};
	cin>>n>>m;
	
	string a[200010]={};
	for(long long i=1;i<=n;i++){
		long long a1;
		cin>>ai[i];
		a1=ai[i];
		string x,y;
		while(a1>=1){
			y=a1%2+'0';
			x=y+x; 
			a1=a1/2;
		}
		a[i]=x;
	}
	sort(a,a+n+1);
	sort(ai,ai+n+1);	
	for(long long i=1;i<n;i++){
		if(a[i].size()<a[i+1].size()){
			m--;
		}
		if(m==1){
			cout<<ai[i+1];
			break;
		}
	}
	
	
}
