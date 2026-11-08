#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct p{
	int x;
	char c;
};
p a[N];
int n=0;
int main()
{
	freopen ("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	cin >> n;
	for (int i=0; i<n; i++){
		cin>>a[i].x>>a[i].c;
	}
	long long ans=0;
	n--;
	for(int i=0;i<=n;i++){
		int m=n-i;
		int x=a[i].x;
		char c=a[i].c;
		int x1=a[m].x;
		char c1=a[m].c; 
		if(c!=c1){
			if(x==x1){
				ans=ans+x;
				c=c1;
			}else if(x1 < x){
				x-=a[m].x;
				ans+=a[m].x;
				a[m].x=0;
				a[m].c=a[i].c;
			}else if(x1 > x){
				a[m].x-=x;
				ans+=x;
				x=0;
				a[i].c=a[m].c;
			}
		}
		else{
			if(x==x1){ 
				c=c1;
			}else if(x1 < x){
				x-=a[m].x;
				a[m].x=0;
				a[m].c=a[i].c;
			}else if(x1 > x){
				a[m].x-=x;
				x=0;
				a[i].c=a[m].c;
			}
		}
		a[i].x=x;
		a[i].c=c;
		a[m].x=x1;
		a[m].c=c1;
	}
	cout<<ans;
	return 0;
}

