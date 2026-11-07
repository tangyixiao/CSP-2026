#include<bits/stdc++.h>
using namespace std;
long long ava[200005],a[200005],n,m,pow2[35],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}pow2[0]=1;
	for(int i=1; i<=32; i++){
		pow2[i]=pow2[i-1]*2;
	}
	for(int i=32; i>=0; i--){
		int cnt=0;
		for(int j=1; j<=n; j++){
			if((a[j]&pow2[i]) && (!ava[j])){
				cnt++;
			}
		}if(cnt>=m){
			//cout<<cnt<<' ';
			for(int j=1; j<=n; j++){
				if(!(a[j]&pow2[i])){
					ava[j]=1;
				}
			}
		}else{
			continue;
		}ans+=pow2[i];
	}cout<<ans;
	return 0;
} 
