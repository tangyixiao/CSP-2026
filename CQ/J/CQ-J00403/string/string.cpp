#include <bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char op;
}x[300005];
long long n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	long long l=1,r=n;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].op;
	}
	while(l<r){
		if(x[l].a>x[r].a){
			if(x[l].op!=x[r].op) ans+=x[r].a;
			x[l].a-=x[r].a;
			r--;
		}else if(x[l].a<x[r].a){
			if(x[l].op!=x[r].op) ans+=x[l].a;
			x[r].a-=x[l].a;
			l++;
		}else{
			if(x[l].op!=x[r].op) ans+=x[l].a;
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}
