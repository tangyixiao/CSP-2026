#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
bool flag[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=29;i>=0;--i){
		int cnt=0,powans=(1<<i);
//		cerr<<"checking "<<i<<" "<<powans<<endl;
		for(int j=1;j<=n;++j)
			if(!flag[j]&&(a[j]&powans)==powans)
				++cnt;
//		cerr<<cnt<<" have this bit"<<endl;
		if(cnt>=m){
			ans+=powans;
//			cerr<<">=m so now ans="<<ans<<endl;
			for(int j=1;j<=n;++j)
				if(!flag[j]&&(a[j]&powans)!=powans)
					flag[j]=1;
		}
	}
	cout<<ans;
	return 0;
}
