#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[5000005],x,cnt[300005];
bool s[5000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n-i;j++){
			for(int k=0;k<x;k++){
				if(a[j]==b[k]){
				   for(int h=k;h<k-j;h++){
				   	   s[h]=true;
				   }	
				}
			}
			b[x]=a[j];
			x++;
		}
		for(int j=0;j<x;j++){
			if(s[j]==false){
				cnt[b[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << cnt[i] <<" ";
	}
	return 0;
}
