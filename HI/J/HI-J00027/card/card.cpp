#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){ 
		deque<int> p;
		int c[m+5];
		memset(c,-1,sizeof(c));
		for(int j=i;j<=n;j++){
			if(c[a[j]]!=-1){
				while(p.size()>c[a[j]]){
					c[p.back()]=-1;
					p.pop_back();
				}
			}else{
				p.push_back(a[j]);
				c[a[j]]=int(p.size());
			}
		}
		while(!p.empty()){
			b[p.back()]++;
			p.pop_back();
		}
	}
	for(int i=1;i<=m;i++){
		cout <<b[i]<<" ";
	}
	return 0;
}
