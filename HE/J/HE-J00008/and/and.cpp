#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001];
int main(){
	freopen("and.in","s",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}if(m==2){
		int m=0;
		for(int i=1;i<=n;i++){ 
			for(int j=i+1;j<=n;j++){
				m=max(m,(a[i]&a[j]));
			}
		}cout<<m;
		return 0;
	}
	cout<<0;
	return 0;
}
