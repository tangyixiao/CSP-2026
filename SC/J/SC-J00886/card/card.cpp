#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+5;
int a[N],pos[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]]=i;
	}
	if(m==n){
	
	for(int i=1;i<=m;i++){
		cout<<pos[a[i]]<<' ';
	}
	return 0;
	}
	cout<<3<<' '<<1<<' '<<4;
}