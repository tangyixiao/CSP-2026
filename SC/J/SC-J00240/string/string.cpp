#include<bits/stdc++.h>
/*
pts 100
times 9:09
up_date \
*/
using namespace std;
typedef long long ll;
typedef pair<int,int> pt;
const int N = 2e5 + 1000 ;
ll a[N];
char c[N];
ll ans;
int n;
int main (){
//	freopen("string6.in","r",stdin);
//	freopen("string.ans","w",stdout);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(a[l]<=a[r]){
			ans+=c[l]==c[r]?0:a[l];	//ans+=c[l]==c[r]?0:a[r]-a[l] I'm sz
			a[r]-=a[l];
			a[l]=0;
			l++;
		}else{
			ans+=c[l]==c[r]?0:a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/