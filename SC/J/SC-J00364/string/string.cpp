#include<bits/stdc++.h>
using namespace std;
struct xxx{
	unsigned long long y;
	char p;
}a[100010];
unsigned long long t=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int k=0;
	while(n--){
		int x;
		char c;
		cin>>x>>c;
		t+=x;
		a[++k].y=x;
		a[k].p=c;
	}unsigned long long q=t;
	unsigned long long ans=0;
	int l=1;
	int r=k;
	while(q>=0&&l<r){
		if(a[l].p!=a[r].p){
			ans+=min(a[l].y,min(a[r].y,q));
			q-=min(a[l].y,min(a[r].y,q));
			if(q==0){
				cout<<ans;
				return 0;
			}
			else{
				if(a[r].y==min(a[l].y,min(a[r].y,q))){
					a[l].y-=a[r].y;
					r--;
				}
				else if(a[l].y==min(a[l].y,min(a[r].y,q))){
					a[r].y-=a[l].y;
					l++;
				}
				else if(a[r].y==min(a[l].y,min(a[r].y,q))&&a[l].y==min(a[l].y,min(a[r].y,q))){
					l++;
					r++;
				}
			}
		}
		else{
			q-=min(a[l].y,min(a[r].y,q));
			if(q==0){
				cout<<ans;
				return 0;
			}
			else{
				if(a[l].y==min(a[l].y,min(a[r].y,q))){
					l++;
				}
				else{
					r++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}