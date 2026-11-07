#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=2e5+50;
int n,l;
int be[MAXN],en[MAXN],ba[MAXN];
char c[MAXN];
int num,k,tag;
int ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ba[i]>>c[i];
		be[i]=l;
		l+=ba[i];
		en[i]=l;
	}
	for(int i=n;i>=1;i--){
		tag=num;
		num+=ba[i];
		if(en[k]>=num){
			if(c[k]!=c[i]){
				ans+=ba[i];
			}
			continue;
		}
		while(1){
			if(en[k]>=num){
				if(c[k]!=c[i]){
					ans+=num-be[k];
				}
				break;
			}
			if(c[k]!=c[i]){
				ans+=min(en[k]-tag,en[k]-be[k]);
			}
			k++;
		}
	}
	cout<<ans/2;
}
//10:06 100pts