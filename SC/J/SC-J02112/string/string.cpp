#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct node{
	long long num;
	char x;
}a[200050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num;
		cin>>a[i].x;
	}
	long long l=1,r=n;
	while(l<=r){
		long long lnum=a[l].num;
		long long lx=a[l].x;
		long long rnum=a[r].num;
		long long rx=a[r].x;
		if(lx==rx){
			if(lnum<rnum){
				l++;
				a[r].num=rnum-lnum;
			}
			else if (lnum>rnum){
				r--;
				a[l].num=lnum-rnum;
			}
			else{
				l++;
				r--;
			}
		}
		else{
			if(lnum<rnum){
				l++;
				ans+=lnum;
				a[r].num=rnum-lnum;
			}
			else if (lnum>rnum){
				r--;
				ans+=rnum;
				a[l].num=lnum-rnum;
			}
			else{
				ans+=lnum;
				l++;
				r--;
			}
		}
	}
	cout<<ans; 
	return 0;
}