#include<bits/stdc++.h>
using namespace std;
unsigned long long n,l,r,ans;
struct NODE{
	long long a;
	string s;
}c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=1;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>c[i].a>>c[i].s;
	}
	while(l<r){
		if(c[l].s!=c[r].s){
			if(c[l].a>c[r].a){
				c[l].a-=c[r].a;
				ans+=c[r].a;
				r--;
			}
			else if(c[l].a==c[r].a){
				l++;
				ans+=c[r].a;
				r--;
			}
			else{
				c[r].a-=c[l].a;
				ans+=c[l].a;
				l++;
			}
		}
		else{
			if(c[l].a>c[r].a){
				c[l].a-=c[r].a;
				r--;
			}
			else if(c[l].a==c[r].a){
				l++;
				r--;
			}
			else{
				c[r].a-=c[l].a;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
