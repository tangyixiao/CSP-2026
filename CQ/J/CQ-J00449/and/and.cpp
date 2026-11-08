#include<bits/stdc++.h>
using namespace std;
const int MAXN=3e5+5;
int n,m;
int a[MAXN],tag[MAXN],sum[MAXN];
vector<int>erase[32];
void er(int id){
	for(auto x:erase[id]){
		if(tag[x]==1)continue;
		tag[x]=1;
		for(int j=0;j<30;j++){
			if(((1<<j)&a[x])){
				sum[j]--;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=0;j<30;j++){
			if(((1<<j)&a[i])){
				sum[j]++;
			}else{
				erase[j].push_back(i);
			} 
		}
	}
	int ans=0;
	for(int i=29;i>=0;i--){
		if(sum[i]>=m){
			ans=(ans+(1<<i));
			er(i);
		}
	}
	printf("%d",ans);
	return 0;
}
