#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct lmy{
	char c;
	int s;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	bool all=1;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x;
		cin>>y;
		a[i].c=y;
		a[i].s=x;
		if(i>1&&y!=a[i-1].c) all=0;
	}
	if(all){
		cout<<0;
		return 0;
	}
	long long ans=0;
	int i=1,j=n,n1,n2;
	bool change=0;
	while(i<j){
		if(a[i].s==a[j].s){
			if(a[i].c!=a[j].c)ans+=a[i].s;
			j--;
			i++; 
		}
		else if(a[i].s>a[j].s){
			ans+=a[j].s;
			a[i].s-=a[j].s;
			j--;
		}
		else{
			a[j].s-=a[i].s;
			ans+=a[i].s;
			i++;
		}
	}
	cout<<ans;
	return 0; 
}
