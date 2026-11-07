#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
struct str{
	int a;
	char c;
}st[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i].a>>st[i].c;
	}
	int j=n;
	for(int i=1;i<j;i++){
		while(st[i].a>0){
			if(st[j].c!=st[i].c){
				if(st[j].a>st[i].a){
					st[j].a-=st[i].a;
					ans+=st[i].a;
					st[i].a=0;
				}
				else{
					st[i].a-=st[j].a;
					ans+=st[j].a;
					st[j].a=0;
					j--;
				}
			}
			else{
				if(st[j].a>st[i].a){
					st[j].a-=st[i].a;
					st[i].a=0;
				}
				else{
					st[i].a-=st[j].a;
					st[j].a=0;
					j--;
				}
			}
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
