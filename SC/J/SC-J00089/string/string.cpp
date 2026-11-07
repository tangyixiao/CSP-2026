#include<bits/stdc++.h>
using namespace std;
long long lens[200005];
string s[200005];
int n,l=1,r;
long long ans,minn;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    r=n;
    for(int i=1;i<=n;i++){
    	cin>>lens[i]>>s[i];
	}
	while(l<r){
		if(s[l]==s[r]){
			minn=min(lens[l],lens[r]);
			lens[l]-=minn;
			lens[r]-=minn;
			if(lens[l]==0)l++;
			if(lens[r]==0)r--;
		}
		else {
			minn=min(lens[l],lens[r]);
			lens[l]-=minn;
			lens[r]-=minn;
			ans+=minn;
			if(lens[l]==0)l++;
			if(lens[r]==0)r--;
		}
	}
	cout<<ans;
	return 0;
}
//10 fen zhong xie de bu zhi dao neng bu neng guo
//ku nan bing mei you zheng jiu wo wo ban si bu huo wo lei le 
//ru guo wo ru xuan le qing at wo(luogu:jianzongX(1441888)) 
//niu lai! 
//    __  _               _             __
//   / / | |          ___| |___        !  !
//  / /__| |____     |___   ___|       !  !
// /_____   ____|   __\_\| |/_/__      !  !
//  _____| |_____  |_____   _____|     !  ! 
// |_____   _____|    / /| |\ \         \/
//       | |         / / | | \ \       /  \
//       |_|        /_/  |_|  \_\      \__/
