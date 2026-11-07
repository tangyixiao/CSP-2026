#include <bits/stdc++.h>
using namespace std;
string s,t;
long long n,i,m=0;
struct nod{
	long long x;
	char y;
};
nod a[100005],b[100005];
bool cmp(nod w,nod z){
	return w.y==z.y;
}
int main(){
 	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int f=0;
	for(i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
		if(i!=1&&a[i].y!=a[i-1].y) f=1;
	}
	if(f==0){
		cout<<0;
		return 0;
	}
	else{
		for(i=1;i<=n/2;i++){
			for(long long j=1;j<=a[i].x;j++){
				s+=a[i].y;
			}
		}
		for(i=n-n/2+1;i<=n;i++){
			for(long long j=1;j<=a[i].x;j++){
				t+=a[i].y;
			}
		}
		for(i=0;i<=n/2;i++){
			if(s[i]!=t[i]) m++;
		}
	}
	cout<<m;
	return 0;
}