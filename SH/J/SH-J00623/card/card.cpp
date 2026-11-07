#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005],c[500005],cur,ans[500005];
//b[i]:值为i的牌最后一次出现的位置
//c[i]:位置i的牌的值
//c[b[i]]==i:值为i的牌仍然存在 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=1;i<=n;++i){
//		cerr<<"now round "<<i<<endl;
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		cur=0;
		for(int j=i;j<=n;++j){
//			cerr<<"checking "<<j<<" val="<<a[j]<<" last found="<<b[a[j]]<<" now there="<<c[b[a[j]]]<<endl;
//			cerr<<"now cur="<<cur<<endl;
			if(b[a[j]]<=cur&&c[b[a[j]]]==a[j]){
				cur=b[a[j]];
//				cerr<<"it's still there. now cur="<<cur<<endl;
			}
			else{
				++cur;
				c[cur]=a[j];
				b[a[j]]=cur;
//				cerr<<"it's not there. now cur="<<cur<<" last found="<<b[a[j]]<<" now there="<<c[b[a[j]]]<<endl; 
			} 
		}
//		cerr<<"calculate time"<<endl;
		for(int j=1;j<=cur;++j){
//			cerr<<"val "<<c[j]<<" found on "<<j<<endl;
			ans[c[j]]++;
//			cerr<<"now its ans="<<ans[c[j]]<<endl;
		}
	}
	for(int i=1;i<=m;++i)
		cout<<ans[i]<<' ';
	return 0;
}
