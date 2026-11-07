#include<bits/stdc++.h>
using namespace std;
int n,m;
int a;
int x,y;
int t;
int maxx=0,maxxx=0;
void q(int k){
	int cnt=0;
	while(k){
		if(k%2==1){
			cnt++;
		}
		k/=2;
	}
	if(cnt>maxx){
		maxx=cnt;
		x=k;
	}
	else if(cnt>maxxx&&cnt!=maxx){
		maxxx=cnt;
		y=k;
	}
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		q(a);
	}
	string d,f;
	while(x){
		d+=x%2;
		x/=2;
	}
	while(y){
		f+=y%2;
		y/=2;
	}
	int cnt=0;
	int s=d.size();
	int ss=f.size();
	int minn=1000;
	minn=min(minn,min(s,ss));
	for(int i=0;i<=minn-1;i++){
		if(d[i]==1&&f[i]==1){
			cnt+=pow(2,i)*1;
		}
	}
	cout<<cnt;
	return 0;
 } 