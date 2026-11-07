#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+5;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[N],s;//s主要写特殊性质n==m 
	cin>>n>>m;
	cin>>a[1];
	s=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		s&=a[i];
	}
	if(n==m){
		cout<<s<<endl;
		return 0;
	}
	else if(m==n-1&&m!=2){
		int choice;
		long long p=1,xun=0;
		for(int i=1;i<=n;i++){
			choice=i;
			p=1;
			for(int j=1;j<=n;j++){
				if(j!=choice){
					p&=a[j];
				}
			}
			xun=max(xun,p);
		}
			cout<<xun<<'\n';
			return 0;		
	}
	else {
		s=0;
	}
	if(m==1){
		cout<<0<<'\n';
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				s=max(s,a[i]&a[j]);
			}
		}
		cout<<s<<'\n';
		return 0;
	}
	
	return 0;
}
