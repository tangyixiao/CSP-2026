#include<bits/stdc++.h>
using namespace std;
int n;
long long ans=0;
struct str{
	int a;
	char c;
}p[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i].a;
		cin>>p[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(p[l].c!=p[r].c)ans+=min(p[l].a,p[r].a);
		if(p[l].a>p[r].a){
			p[l].a-=p[r].a;
			r--;
		}
		else if(p[r].a>p[l].a){
			p[r].a-=p[l].a;
			l++;
		}
		else if(p[r].a==p[l].a){
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
