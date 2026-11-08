#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int a[N];
long long b[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=-n;i++)cin>>a[i];
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			if(a[i]>=b[j]){
				b[j]=a[i];
			}
		}
	}
	int c=-1;
	for(int i=1;i<=m;i++){
		if(b[i]<=c)c=b[i];
	}
	
	cout<<c;
}
