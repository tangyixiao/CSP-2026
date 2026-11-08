#include<bits/stdc++.h>
using namespace std;
struct line{
	int a;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0,n,l,r,mina;
	line d[200005];
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>d[i].a>>d[i].c;
	}
	l=0;
	r=n-1;
	while(l!=r){
		mina=min(d[l].a,d[r].a);
		if(d[l].c!=d[r].c){
			ans+=mina;
		}
		d[l].a-=mina;
		d[r].a-=mina;
		if(d[l].a==0){
			l++;
			if(l==r){
				break;
			}
		}
		if(d[r].a==0){
			r--;
			if(l==r){
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
