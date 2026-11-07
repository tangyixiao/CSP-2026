#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	int p1=1,p2=n;
	while(p1!=p2){
		long long mi=min(a[p1],a[p2]);
		if(c[p1]!=c[p2]){cnt+=mi;}
			a[p1]-=mi,a[p2]-=mi;
			if(!a[p1]) p1+=1;
			if(!a[p2]) p2-=1;
}
cout<<cnt;
	return 0;
}
