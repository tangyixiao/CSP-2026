#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m,a[N],ans[N],st[N],tt;
void b(int i){
	tt=0;
	for (int j=i;j<=n;j++){
		for (int k=1;k<=tt;k++){
			if (st[k]==a[j]){
				while (k--){
					tt--;
				}
				break;
			}
		}
		st[++tt]=a[j];
	}
}
int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		b(i);
		for (int j=0;j<m;j++){
			for (int k=1;k<=tt;k++){
				if (st[k]==(j+1)){
					ans[j]++;
					break;
				} 
			}
		}		
	}
	for (int i=0;i<m;i++){
		if (ans[i]!=0) cout<<ans[i]<<" ";
	}
	return 0;
}
