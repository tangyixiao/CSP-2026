#include<bits/stdc++.h>
#define int long long

using namespace std;

int n;
struct Node{
	int a;
	char c;
};
vector<Node> vc;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int m = 0,cnt = 0;
	for(int i = 1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		if(m!=0 && vc[m-1].c==c){
			vc[m-1].a+=a;
		}else{
			vc.push_back({a,c});
			m++;
		}
		cnt+=a;
	}
	int ans = 0;
	for(int i = 0,j = m-1,ii = 1,jj = cnt;ii<jj;){
		if(vc[i].c!=vc[j].c){
			int ri = ii+vc[i].a-1,rj = jj-vc[j].a+1;
			int zhejj = cnt+1-jj,zherj = cnt+1-rj;
			if(ri>zherj){
				if(ii>zhejj){
					ans+=zherj-ii+1;
				}else{
					ans+=zherj-zhejj+1;
				}
			}else if(ri==zherj){
				ans+=zherj-max(zhejj,ii)+1;
			}else{
				ans+=ri-max(zhejj,ii)+1;
			}
		}
		if(cnt+1-(jj-vc[j].a+1)>ii+vc[i].a-1){
			ii+=vc[i].a;
			i++;
		}else{
			jj-=vc[j].a;
			j--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
//ypy is so cute
