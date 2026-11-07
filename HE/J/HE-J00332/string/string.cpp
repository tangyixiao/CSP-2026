#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=2e5+800;
long long num[MAXN];
char ask[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i) cin>>num[i]>>ask[i];
	int r=n;
	long long change=0;
	for(int l=1;l<r;++l){
		while(l<r){
			if(num[r]>=num[l]){
				if(ask[r]!=ask[l])
					change+=num[l];
				num[r]-=num[l];
				break;
			}
			else{
				if(ask[r]!=ask[l])
					change+=num[r];
				num[l]-=num[r];
				r--;
			}
		}
	}
	cout<<change;
	return 0;
}
