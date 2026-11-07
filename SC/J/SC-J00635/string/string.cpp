#include<bits/stdc++.h>
using namespace std;
string a;
long long m=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdin);
	ios::sync_with_stdio(false);cin.tie(0);
	long long n;
	cin>>n;
	int an=0;
	for(long long i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(long long j=1;j<=x;j++){
			a[m]=y;
			m++;
		} 
	}
	int l=1;
	int r=m;
	if(m%2==0){
		for(long long i=1;i<=m/2;i++){
			if(a[l]!=a[r]){
				an++;
			}
			l++;
			r--;
			
		}
	}else{
		int k=m/2;
		for(long long i=1;i<=k;i++){
			if(a[l]!=a[r]){
				an++;
			}
			l++;
			r--;
			
		}
	}
	cout<<an;
	return 0;
} 