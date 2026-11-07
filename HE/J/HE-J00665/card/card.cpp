#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int n,m;
int a[N];
int is[M];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		is[i]=0;
	}
	vector<int> q;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool t=false;
			int r;
			for(int k=1;k<=q.size();k++){
				if(q[k]==a[i]){
					r=k;
					t=true;
				}
				
			}
			if(t) q.erase(q.begin()+r+1,q.end());
			else{
					q.push_back(a[i]);
					continue;
			}
		}
		for(int h=1;h<=q.size();h++){
			is[q[h]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<is[i]<<" ";
	}
	return 0;
}
