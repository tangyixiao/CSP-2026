#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
struct node{
	int x;
	char c;
}a[N];
int n;
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].x>>a[i].c;
	int i=1,j=n;
	ll ans=0;
	while(i<j){
		if(a[i].c!=a[j].c)ans+=min(a[i].x,a[j].x);
		if(a[i].x==a[j].x) i++,j--;
		else if(a[i].x>a[j].x) a[i].x-=a[j].x,j--;
		else if(a[i].x<a[j].x) a[j].x-=a[i].x,i++;
	}
	cout<<ans;

	return 0;
}
/*
8
39 s
8 r
31 e
35 c
20 d
49 u
1 x
20 r
1 8 7 6
*/ 
