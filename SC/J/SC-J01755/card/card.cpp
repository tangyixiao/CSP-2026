#include<bits/stdc++.h>
using namespace std;
const int MAXN=5*1e5+10;
const int MAXM=3*1e5+10;
int a[MAXN];
int cnt[MAXM]={0};
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=m; i++) {
		
		bool p1[MAXN]= {0};
		stack<int> p2;
		for(int j=i; j<=n; j++) {
			if(p1[a[j]]>0) {
				while(p1[a[j]]!=0) {
					//cout<<"w\n";
					p1[p2.top()]-=1;
					p2.pop();
				}
			}
			p2.push(a[j]);
			p1[a[j]]++;
			//cout<<p2.top()<<" ";
		}
		for(int j=1;j<=n;j++){
			if(p1[j]>0)cnt[j]++;
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
