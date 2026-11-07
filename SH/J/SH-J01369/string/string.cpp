#include<bits/stdc++.h>
using namespace std;
const int N=2e5+99;
struct node{
	char c;
	long long a;
}st[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i].a>>st[i].c;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(st[l].c!=st[r].c){
			if(st[l].a>st[r].a){
				ans+=st[r].a;
				st[l].a-=st[r].a;
				r--;
			}else if(st[l].a<st[r].a){
				ans+=st[l].a;
				st[r].a-=st[l].a;
				l++;
			}else{
				ans+=st[l].a;
				l++;r--;
			}
		}else{
			if(st[l].a>st[r].a){
				st[l].a-=st[r].a;
				r--;
			}else if(st[l].a<st[r].a){
				st[r].a-=st[l].a;
				l++;
			}else{
				l++;r--;
			}
		}
	}
	cout<<ans;
}
