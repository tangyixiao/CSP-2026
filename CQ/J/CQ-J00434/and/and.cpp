#include<iostream>
using namespace std;
const int N=2e5+10;
int n,m,a[N][31],mx;
int cnt[N];
int res[N],top;
int ans=0;
int l=0,r;
int f(int a){
	int re=0;
	while(a){
		re+=(a&1);
		a>>=1;
	}return re;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		res[i]=i;top++;
		int t;cin>>t;
		for(int j=0;j<30;j++){
			a[i][j]=((1<<j)&t);
			cnt[j]+=a[i][j];
		}
		mx=max(mx,t);
	}
	for(int i=29;i>=0;i--){
		if(cnt[i]>=m){
			int tmp[N]={0};
			for(int j=1;j<=n;j++){
				if(a[j][i]){
					tmp[j]++;
				}
			}
			int tmpcnt=0;
			for(int i=1;i<=top;i++){
				tmp[res[i]]++;
				if(tmp[res[i]]==2)tmpcnt++;
			}
			if(tmpcnt>=m){
				ans+=(1<<i);int tmptop=top;top=0;
				for(int i=1;i<=tmptop;i++){
					if(tmp[res[i]]==2){
						res[++top]=res[i];
					}
				}
			}
		}
	}cout<<ans;
}
