#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
long long n,ans;
struct h{
	long long a;
	char c;
}v[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i].a>>v[i].c;
	}int l=1,r=n;
	while(l<r){
		int g=min(v[l].a,v[r].a);
		if(v[l].c!=v[r].c){
			ans+=g;
		}v[l].a-=g;
		v[r].a-=g;
		if(v[l].a==0){
			l++;
		}if(v[r].a==0){
			r--;
		}
	}cout<<ans<<"\n";
	return 0;
}
