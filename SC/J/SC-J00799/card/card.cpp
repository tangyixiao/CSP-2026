#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m] = {0};
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int j=1;j<=n;++j){
		int c[n] = {0};
		int d[m] = {0};
		for(int i=j;i<=n;++i){
			c[i] = a[i];
			d[a[i]]++;
			if(d[a[i]] > 1){
				for(int j=1;j<=i-1;++j){
					if(c[j] == a[i]){
						int cnt = i-j;
						int f = j;
						while(cnt>0){
							d[c[f]]--;
							c[f] = 0;
							f++;
							cnt--;
						}
					}
				}
			}
		}
		for(int i=1;i<=m;++i){
			if(d[i]>0){
				b[i]+=d[i];
			}
		}
	}
	for(int i=1;i<=m;++i){
		if(b[i]>0){
			cout<<b[i]<<' ';
		} 
	}
	return 0;
}