#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],b[N],nex[N],cnt[N],sum[N];
void clean(){
	for(int i=1;i<=n;i++){
		cnt[i]=0;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nex[b[a[i]]]=i;
		b[a[i]]=i;
	}for(int st=1;st<=n;st++){
		clean();
		for(int i=st;i<=n;i++){
			while(i>0&&i<=n&&nex[i]!=0){
				i=nex[i];
			}if(i<=0||i>n)break;
			cnt[a[i]]=1;
//			cout<<i<<" ";
		}for(int i=1;i<=m;i++){
			sum[i]+=cnt[i];
//			cout<<cnt[i]<<" ";
		}//cout<<"\n";
	}for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}