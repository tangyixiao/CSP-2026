#include<bits/stdc++.h>
using namespace std;
const int MAXN=(int)2e5+1;
int a[MAXN];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)   cin>>a[i];
	int ans=0;
	for(int i=30;i>=0;i--){
        int p=1<<i,cnt=0;
        ans+=p;
        for(int j=1;j<=n;j++){
            if((ans&a[j])==ans)   cnt++;
        }
        if(cnt<m){
            ans-=p;
        }
	}
	cout<<ans<<endl;
	return 0;
}
