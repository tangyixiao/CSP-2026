#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char s[200005];
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
 	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
	}
	long long x=a[1],y=a[n],p=1,q=n,mn;
	long long ans=0;
	while(q>p){
		mn=min(x,y);
		if(s[p]!=s[q]) ans+=mn;
		x-=mn;
		y-=mn;
		if(x==0){
			p++;
			x=a[p];
		} 
		if(y==0){
			q--;
			y=a[q];
		}
	}
	cout<<ans;
	return 0;
} 
