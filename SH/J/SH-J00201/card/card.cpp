#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int b[300010],c[300010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	reverse(v.begin(),v.end());
//	for(int i=0;i<n;i++) cout<<v[i]<<' ';
	for(int i=0;i<n;i++){
		if(b[v[i]]!=0){
			for(int j=b[v[i]];j<=i;j++){
//				b[v[j]]=0;
				v[j]=0;
			}
		}
		b[v[i]]=i+1;
		for(int j=0;j<=i;j++){
			c[v[j]]++;
//			if(v[j]==3) cout<<n-i<<' ';
//			if(i==4) cout<<v[j]<<' ';
		}
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<' ';
	return 0;
}
