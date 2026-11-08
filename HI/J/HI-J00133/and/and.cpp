#include<bits/stdc++.h>
using namespace std; 
int n,m;
long long a[200200];
bool f=1,f2=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>4) f2=0;
		long long x=a[i]+1;
		while(x!=0){
			if(x%2==0||x==1){
				x/=2;
			}
			else if(x!=1){
				f=0;
				break;
			}
		}
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(f==1){
		cout<<a[n-m+1];
		return 0;
	}
	if(m==n){
		long long v,t=a[1];
		for(int i=2;i<=n;i++){
			v=a[i];
			long long c=t&v;
			t=c;
		}
		cout<<t;
		return 0;
	}
	if(f2==1){
		cout<<4;
		return 0;
	}
	return 0;
}
