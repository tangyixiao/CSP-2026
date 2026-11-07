#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n;
struct th{
	int a;
	char c;
}k[N],p[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin>>n;
	int x;
	char y;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		k[i].a=x;
		k[i].c=y;
	}
	for(int i=1;i<=n;i++){
		p[i].a=k[n-i+1].a;
		p[i].c=k[n-i+1].c;
	}
	int diff=0;
	for(int i=1;i<=n;i++){
		if(k[i].c!=p[i].c&&p[i].a<=k[i].a){
			if(k[i].c!=p[i+1].c){
				diff+=k[i].a;
			}
			else{
				diff+=p[i].a;
			}
		}
		else if(k[i].c!=p[i].c&&p[i].a>k[i].a){
			if(k[i].c!=p[i-1].c){
				diff+=p[i].a;
			}
			else{
				diff+=k[i].a;
			}
		}
	}
	diff>>=1;
	cout<<diff;
	return 0;
} 
