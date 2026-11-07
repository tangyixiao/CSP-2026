#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100000000],ans,cnt;
bool k[100000000];
int main(){
	freopen("and.in ","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m=1){
		cout<<a[1];
		return 0;
	}
	else if(m==n){
		long long qw=a[1];
		for(int i=2;i<=n;i++){
			qw&=a[i];
		}
		cout<<qw;
	}
	else if(m==2){
		a[1]&=a[2];
		cout<<a[1];
		return 0;
	}
	else if(m==n-1){
		long long qw=0;
		for(int i=1;i<=n;i++){
			long long qe;
			if(i!=1){
				qe=a[1];
			}
			else{
				qe=a[2];
			}
			for(int j=1;j<=n&&j!=i;j++){
				qe&=a[j];
			}
			qw=max(qw,qe);
		}
		cout<<qw-1;
		return 0;
	}
	return 0;
}
