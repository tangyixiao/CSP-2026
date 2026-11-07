#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[210000];
unordered_map<int,bool>mp;
bool getbin(int x,int w){
	return (bool)(x & (1 << w));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	int ans = 0;
	for(int i = 30;i >= 0;i--){
		int cnt = 0;
		for(int j = 1;j <= n;j++){
			if(mp[a[j]]) continue;
			cnt += getbin(a[j],i);
		}
		if(cnt >= m){
			ans += (1 << i);
			for(int j = 1;j <= n;j++){
				if(!getbin(a[j],i)){
					mp[a[j]] = true;
				}
			}
		}
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

