#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=2e5+7;
struct node{
	int len;
	char c;
};
int N;
int ans=0;
node a[MAXN];
void solve(){
	cin>>N;
	for(int i=1;i<=N;i++)cin>>a[i].len>>a[i].c;
	for(int i=1,tail=N;i<tail;){
		int tmp1=a[i].len;
		int tmp2=a[tail].len;
		char c1=a[i].c;
		char c2=a[tail].c;
		if(c1==c2){
			if(tmp1>tmp2){
				a[i].len-=a[tail].len;
				tail--;
			}else if(tmp1<tmp2){
				a[tail].len-=a[i].len;
				i++;
			}else{
				i++;tail--;
			}
		}else{
			if(tmp1>tmp2){
				ans+=tmp2;
				a[i].len-=a[tail].len;
				tail--;
			}else if(tmp1<tmp2){
				ans+=tmp1;
				a[tail].len-=a[i].len;
				i++;
			}else{
				ans+=tmp1;
				i++;tail--;
			}
		}
	}
	cout<<ans;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}