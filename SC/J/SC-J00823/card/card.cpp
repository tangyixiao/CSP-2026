#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;\
int n,m,s,c,cnt;
int a[N],b[N],x[N];
int main(){
	freopen("card4.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int v=1;v<=n;v++){
		s=0,c=0,cnt=v-1;
		for(int i=v;i<=n;i++){
			cnt++;
			b[cnt]=a[i];
			if(s!=b[cnt]){
				s=b[cnt];
				c=i;
			}
			else if(s=b[cnt]){
				cnt=c;
			}
		}
		for(int i=v;i<=cnt;i++)
			x[b[i]]++;
	}
	for(int i=1;i<=m;i++) cout<<x[i]<<' ';
	return 0;
}
