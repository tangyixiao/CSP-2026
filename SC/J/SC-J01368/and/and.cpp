#include<bits/stdc++.h>
using namespace std;
long long a[100001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int zd=INT_MIN;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>zd)zd=a[i];
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				int x=a[i]&a[j];
				if(x>zd)zd=x;
			}
		}
	}
	cout<<zd;
	return 0;
}