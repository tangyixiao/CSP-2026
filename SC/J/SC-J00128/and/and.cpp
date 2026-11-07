#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
const int N=2e5+10;
bool flag=0;
int n,m,a[N],cnt[32],ans;
vector<int>box[32];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i],p=0;
		while(x){
			p++;
			if(x%2==1)cnt[p]++,box[p].push_back(i);
			x/=2;
		}
	}
	for(int i=30;i>=1;i--){
		ans*=2;
		//cout<<"i:"<<i<<"  cnt:"<<cnt[i]<<"\n";
		if(cnt[i]>=m){
			ans+=1;
			flag=1;
		}
		if(flag){//cout<<((1<<(i-2)))<<"\n";
			cnt[i-1]=0;
			box[i-1].clear();
			for(int j=0;j<box[i].size();j++){
				int xx=box[i][j],x=a[xx];
				if((x&(1<<(i-2)))==(1<<(i-2))){
					cnt[i-1]++,box[i-1].push_back(xx);
					//cout<<"**"<<i<<" "<<xx<<" "<<x<<"\n";
				}
			}
		}
		
		//cout<<i<<" "<<ans<<"\n";
	}
	cout<<ans;
	return 0;
}