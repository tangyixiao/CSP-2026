#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	int a;
	char c;
}h[100000005];
int ans=0;
int rp=0;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i].a>>h[i].c;
	}
	int l=1,r=n;
    while(l<=r){
		if(h[l].c==h[r].c){
			ans+=0;
			l++;
			r--;
			rp++;
		}else{
			if(h[l].a>h[r].a){
				ans+=h[r].a;
				h[l].a-=h[r].a;
				r--;
				rp++;
			}else if(h[l].a<h[r].a){
				ans+=h[l].a;
                h[r].a-=h[l].a;
				l++;
				rp++;
			}else{
				ans+=h[r].a;
				l++;
				r--;
				rp++;
			}
		}
	}
	
	cout<<ans;
}

