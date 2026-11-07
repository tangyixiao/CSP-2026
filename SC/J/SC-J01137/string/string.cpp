#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
long long ans=0;
struct node{
	long long x;
	char a;
}q[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[i].x>>q[i].a;
	}
	long long c=n,qz=q[1].x,hz=q[n].x,i=1;
	while(i<=c){
		long long m=qz-hz;
		if(m>0){
			if(q[i].a!=q[c].a){
				ans+=hz;
			}
			c--;
			qz=m;
			hz=q[c].x;
		}else if(m==0){
			if(q[i].a!=q[c].a){
				ans+=hz;
			}
			c--;
			i++;
			qz=q[i].x;
			hz=q[c].x;
		}else if(m<0){
			if(q[i].a!=q[c].a){
				ans+=qz;
			}
			i++;
			qz=q[i].x;
			hz=abs(m);
		}
	}
	cout<<ans;
	return 0;
}
