#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int s=1,cur=a[1],si=1;
	for(int i=2;i<=n;i++){
		if(a[i]==cur) s+=si;
		else{
			cout<<s<<' ';
			cur=a[i];
			s=i;
			si++;
		}
	}
	cout<<s;
	return 0;
}