#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
	int l;
	char c;
}a[200010],b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll ans=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].l>>a[i].c;
	}
	int j=n;
	int r=0;
	char oo;
	for(int i=1;i<=j;i++){
		char op=a[i].c;
		int aa=a[i].l;
		if(aa>=r){
			aa-=r;
			if(op!=oo){
				ans+=r;
			}
		}
		else{
			r-=aa;
			if(op!=oo){
				ans+=aa;
			}
			continue;
		}
		while(a[j].l<aa){
			aa-=a[j].l;
			if(a[j].c!=op){
				ans+=a[j].l;
			}
			j--;
		}
		if(aa>=0){
			r=a[j].l-aa;
			oo=a[j].c;
			if(oo!=op){
				ans+=aa;
			}
			j--;
		}
	}
	cout<<ans;
	return 0;
}
