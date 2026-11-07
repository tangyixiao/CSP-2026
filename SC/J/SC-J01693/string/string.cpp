#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
struct Node{
	int num=0;
	char c;
} a[500010],b[500010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int tot=0;
	char lastc=0;
	for(int i = 1;i<=n;i++){
		cin >> b[i].num >> b[i].c;
		if(b[i].c!=lastc){
			lastc=b[i].c;
			++tot;
			a[tot].c=lastc;
		}
		a[tot].num+=b[i].num;
	}
	int l=1,r=tot;
	int ans=0;
	while(l<r){
		bool cg=a[l].c!=a[r].c;
		if(a[l].num<a[r].num){
			ans+=cg*a[l].num;
			a[r].num-=a[l].num;
			a[l].num=0;
			l++;
		} else if(a[l].num>a[r].num){
			ans+=cg*a[r].num;
			a[l].num-=a[r].num;
			a[r].num=0;
			r--;
		} else{
			ans+=cg*a[r].num;
			a[l].num=0;
			a[r].num=0;
			l++,r--;
		}
	}
	cout << ans;
	return 0;
}