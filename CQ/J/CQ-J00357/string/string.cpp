#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n;
int l=1,r;
ll ans;
struct Piece{
	ll num;
	char c;
}P[200005];

void File(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
}

int main(){
	File();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>P[i].num>>P[i].c;
	}
	r=n;
	while(l<r){
		if(P[l].c!=P[r].c){
			ans+=min(P[l].num,P[r].num);
		}
		if(P[l].num>=P[r].num){
			P[l].num-=P[r].num;
			r--;
		}else{
			P[r].num-=P[l].num;
			l++;
		}
	}
	cout<<ans;
	return 0;
}
/*
Orange AC
*/
