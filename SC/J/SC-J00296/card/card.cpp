#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,a[500005],s[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int> t;
		vector<int> b(500005,0);
		for(int j=i;j<=n;j++){
			if(!b[a[j]]){
				t.push(a[j]);
				b[a[j]]=1;
			}
			else{
				if(t.top()!=a[j]){
					b[t.top()]=0;
					t.pop();
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(b[j]){
				s[j]++;
			}
		}
		b.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}