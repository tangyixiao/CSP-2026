#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int sum;
int w[200005];
int s;
int path[200005];
bool st[200005];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	if(m==1){
		for(int i=0;i<n;i++){
		sum=max(sum,w[i]);
		}
	}else if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
			sum=max(sum,w[i]&w[j]);
			}
		}
	}
cout<<sum;

	return 0;
}
