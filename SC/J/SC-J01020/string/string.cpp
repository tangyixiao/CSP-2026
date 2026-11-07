#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int n;
	char c;
};
int ans,n;
vector<node> a;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		int nu;
		char ch;
		cin>>nu>>ch;
		a.push_back({nu,ch});
	}
	int l=0,r=a.size()-1;
	while(l<=r){
		if(a[l].c!=a[r].c){
			if(a[l].n<a[r].n){
				a[r].n=a[r].n-a[l].n;
				ans+=a[l].n;
				l++;
			}
			else if(a[l].n>a[r].n){
				a[l].n=a[l].n-a[r].n;
				ans+=a[r].n;
				r--;
			}
			
		}
		else{
			l++;r--;
		}
		
	}
	cout<<ans;		
	return 0;
}