#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll n;
ll a,ans;
struct node{char s;ll a;} t[N],g;
char s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a>>s;
		t[i]={s,a};
	}
	
	for(int i=1,j=n;i<=j;i++,j--) {
		if(t[i].s!=t[j].s) {
			if(t[i].a>t[j].a) {
				t[j].s=t[i].s;
				t[i].a-=t[j].a;
				ans+=t[j].a;
				i--;
			}
			else if(t[i].a==t[n-i].a) {
				t[j].s=t[i].s;
				ans+=t[j].a;
			}
			else {
				t[i].s=t[j].s;
				t[j].a-=t[i].a;
				ans+=t[i].a;
				j++;
			}
		}
		
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
