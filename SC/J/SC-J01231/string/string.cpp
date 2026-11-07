#include<bits/stdc++.h>
struct need{
	int a;
	char c;
};
using namespace std;
using ll=long long;
const int MAXN=2e5+5;
need s[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
	}
	ll ans=0;
	int l=1,r=n;
	while(l<r){
		if(s[l].c==s[r].c){
			if(s[l].a>s[r].a){
				s[l].a-=s[r].a;
				r--;
			}
			else if(s[l].a<s[r].a){
				s[r].a-=s[l].a;
				l++;
			}
			else{
				r--;
				l++;
			}
		}
		else{
			if(s[l].a>s[r].a){
				ans+=s[r].a;
				s[l].a-=s[r].a;
				r--;
			}
			else if(s[l].a<s[r].a){
				ans+=s[l].a;
				s[r].a-=s[l].a;
				l++;
			}
			else{
				ans+=s[l].a;
				r--;
				l++;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}