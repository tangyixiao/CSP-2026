#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct node{
	long long x;
	char y;
}a[2000100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long o;
		cin>>o;
		char p;
		cin>>p;
		a[i].x=o;
		a[i].y=p;
	}
	int l=1,r=n;
	while(l<r){
		if(a[l].y==a[r].y){
			if(a[l].x==a[r].x){
				l++;
				r--;
			}else{
				if(a[l].x>a[r].x){
					a[l].x-=a[r].x;
					r--;
				}else if(a[l].x<a[r].x){
					a[r].x-=a[l].x;
					l++;
				}
			}
		}else{
			if(a[l].x>a[r].x){
			    a[l].x-=a[r].x;
				ans+=a[r].x;
				r--;
			}else if(a[l].x==a[r].x){
				ans+=a[l].x;
				l++;
				r--;
			}else if(a[l].x<a[r].x){
				a[r].x-=a[l].x;
				ans+=a[l].x;
				l++;
			}
		}
		
	}
	cout<<ans;
	return 0;
}
