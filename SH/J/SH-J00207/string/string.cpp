#include<bits/stdc++.h>
using namespace std;
struct node{
	long long a;
	char c;
}t[200010];
long long n,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i].a>>t[i].c;
	}
	int l=1,r=n;
	while(l<r){
		int m=0;
		if(t[l].a>t[r].a) m=t[r].a;
		else  m=t[l].a;
		if(t[l].c!=t[r].c) ans+=m;
		t[l].a-=m;
		t[r].a-=m;
		if(t[l].a==0) l++;
		if(t[r].a==0) r--;
	}
	cout<<ans;
	return 0;
}
