#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,num,ans;
int a[200002],ss[200002];
char c[200002];
deque<pair<int,int>> v,v2;
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		num+=a[i];
		ss[i]=ss[i-1]+a[i];
	}
	num/=2;
	int p=0,q=0;
	for(int i=1;i<=n;i++){
		if(num<ss[i]){
			p=i;
			q=abs(num-ss[i-1]);
			break;
		}
	}
	int last=0;
	char l;
	for(int i=1,j=n;i<=p,j>=p;){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
		if(a[i]>a[j]){
			a[i]-=a[j];
			j--;
		}else {
			a[j]-=a[i];
			i++;
		}
	}
	cout<<ans;
}
/*
479681762610


*/