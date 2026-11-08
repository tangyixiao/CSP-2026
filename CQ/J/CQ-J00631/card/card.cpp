#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long list1[maxn];
long long zhong[maxn];
long long ans[maxn];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%lld",&list1[i]);
	for(int i=1;i<=n;i++){
		memset(zhong,0,sizeof(zhong));
		vector<long long> b;
		int l=1,r=1;
		for(int j=i;j<=n;j++){
			if(zhong[list1[j]]==0){
				r++;
				zhong[list1[j]]=r;
				if(b.size()<r){
					b.push_back(list1[j]);
				}else{
					b[r]=list1[j];
				}
			}else{
				r=zhong[list1[j]];
			}for(int j=l;j<=r;j++){
				ans[b[j]]++;
			}
		}
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
} 
