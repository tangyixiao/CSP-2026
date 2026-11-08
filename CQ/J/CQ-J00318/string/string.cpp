#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
	ll g;
	char c;
};
node a[200005];
/*
从两端枚举段
l=1,r=n
不同字符{
l段未改变的比r段未改变的多，ans+=r段数量 ，r--
否则 ans+=l的数量，l++ }
相同字符同上，只是不用加ans
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].g>>a[i].c;
	}
	ll ans=0;
	int l=1,r=n;
	while (l<r){//l<r
		if (a[l].c!=a[r].c){//不同
			if (a[l].g>a[r].g){
				ans+=a[r].g;
				a[l].g-=a[r].g;
				a[r].g=0;
			}
			else {
				ans+=a[l].g;
				a[r].g-=a[l].g;
				a[l].g=0;
			}
		}
		else{//相同
			if (a[l].g>a[r].g){
				a[l].g-=a[r].g;
				a[r].g=0;
			}
			else {
				a[r].g-=a[l].g;
				a[l].g=0;
			}
		}
		if (a[l].g==0)l++;//判断l,r
		if (a[r].g==0)r--;
//		for(int i=1;i<=n;i++){
//			cout<<i<<":"<<a[r];
//		}
	}
	cout<<ans;
	return 0;
} /*
3
2 a
2 b
1 c*/
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b*/
