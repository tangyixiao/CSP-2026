#include<iostream>
using namespace std;
typedef long long ll;
ll n,m,MAX=1e9;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	ll a[MAX]={},cnt[MAX]={};
	for(int i=0;i<n;++i){
		cin>>a[MAX];
		cnt[i]++;
	}
	for(int i=0;i<m;++i){
		cout<<cnt[i];
	}
	return 0;
}
