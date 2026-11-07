#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i]; 
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=m;j++){
			maxn=(a[i]&a[j]);
			
		}
		if(m<n){
			m++;
		}
	}
	cout << maxn;
	
	return 0;
}