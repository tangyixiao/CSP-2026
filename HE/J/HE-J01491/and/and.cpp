#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m=0,n=0;
	cin >> n >> m;
	int lb[n];
	for(int i=0;i<n;i++){
		cin >> lb[i];
	}
	int ci=n*n;
	int ma[ci];
	//
	//for(int i=0;i<m-1;i++){
	//	if(i==0){
			int cs=0;
			for(int j=0;j<n;j++){
				for(int l=0;l<n;l++){
					if(l==j){
						continue;
					} 
					ma[cs]=lb[l] & lb[j];
					cs++;
				}
			}
	//	}
	//	else{
	//		for(int j=0;j<n;j++){
	//			for(int l=0;l<n*m;l++){
	//				ma[]
	//			}
	//		}
	//	}
	//}
	//
	int ans=ma[0];
	for(int i=0;i<ci;i++){
		if(ans<=ma[i]){
			ans=ma[i];
		} 
	}
	cout << ans;
	return 0;
}
