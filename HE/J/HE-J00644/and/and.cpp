#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100; 
long long n,m,a[N],b[100],p[N],top,nt,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	top=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[i]=i;
		for(int j=0;j<=30;j++){
			if(a[i]&(1<<j))b[j]++;
		}
	}
	for(int i=29;i>=0;i--){
		if(m>b[i])continue;
		ans|=1<<i;
		nt=0;
		for(int j=0;j<=i;j++){
			b[j]=0;
		}
		for(int j=1;j<=top;j++){
			if(a[p[j]]&(1<<i)){
				p[++nt]=p[j];
				for(int x=0;x<i;x++){
					if(a[p[j]]&(1<<x))b[x]++;
				}
			}
		}top=nt;
	}cout<<ans<<"\n"; 
	return 0;
}
