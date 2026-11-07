#include<bits/stdc++.h>
using namespace std;
int x(int a){
	a+=1;
	int t=0;
	while(a/2){
		t++;
		a/=2;
	}
	return t;
}
int p[200005],l=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	//a 
	int a;
	for(int i=1;i<=n;i++){
		cin>>a;
		p[l]=x(a);
		l++;
	}
	int t=0,minn=INT_MAX;
	sort(p+1,p+l);
	cout<<l<<endl;
	for(int i=l-1;i>=l-m;i--){
		minn = min(minn,p[i]);
	}
	cout<<minn;
	return 0;
}
