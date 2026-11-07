#include<bits/stdc++.h>
using namespace std;
struct node{
	int s;
	char c;
}a[200005];
long long n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].c;
	}
	int l=1,r=n;
	while(l<=r){
		if(l==r){
			break;
		}
		if(a[l].c!=a[r].c){
			if(a[l].s>=a[r].s){
				ans+=a[r].s;
				a[l].s-=a[r].s;
				r--;
			}else{
				ans+=a[l].s;
				a[r].s-=a[l].s;
				l++;
			}
		}else{
			if(a[l].s>=a[r].s){
				a[l].s-=a[r].s;
				r--;
			}else{
				a[r].s-=a[l].s;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
