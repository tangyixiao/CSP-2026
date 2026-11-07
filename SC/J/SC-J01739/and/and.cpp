#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
struct node{
	int value;
	int cnt=0;
}a[MAXN];
int count(int x){
	int cnt=0;
	while(x){
		cnt+=(x&1);
		x>>=1;
	}
	return cnt;
}
bool cmp(node x,node y){
	return x.cnt>y.cnt;
}
int seg(int x,int y){
	int sum=a[x].value;
	for(int i=x+1;i<=y;i++){
		sum&=a[i].value;
	}
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].value;
		a[i].cnt=count(a[i].value);
	}
	if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++)	mx=max(mx,a[i].value);
		cout<<mx;
		return 0;
	}
	else if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i].value&a[j].value);
			}
		}
		cout<<mx;
		return 0;
	}
	else if(m==n){
		int sum=a[1].value;
		for(int i=2;i<=n;i++)	sum&=a[i].value;
		cout<<sum;
		return 0;
	}
	else if(m==n-1){
		int mx=max(seg(2,n),seg(1,n-1));
		for(int i=2;i<n;i++){
			int sec1=seg(1,i-1),sec2=seg(i+1,n);
			mx=max(mx,sec1&sec2);
		}
		cout<<mx;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int sum=a[1].value;
	for(int i=2;i<=m;i++){
		sum&=a[i].value;
	}
	cout<<sum;
	return 0;
}