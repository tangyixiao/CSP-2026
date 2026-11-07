#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll n,sl,num,cnt;
string u;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int nn;
		char mm;
		cin>>nn>>mm;
		sl+=nn;
		while(nn--){
			u+=mm;
		}
	}
	ll l=0,r=sl-1;
	while(l<=r){
		if(u[l]!=u[r])num++;
		l++;r--;
	}
	cout<<num;
	return 0;
}
