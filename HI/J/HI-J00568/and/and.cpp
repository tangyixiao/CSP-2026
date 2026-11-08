#include <bits/stdc++.h>
using namespace std;
int cnt;
map<int,int>mp;
struct node
{
	int s,num;
	
}a[1000005];
int change(int x){
	int sum=0;
	while(x){
		if(x%2==0){
			sum++;
		}
		x/=2;
	}
	return sum;
}
bool cmp(node x,node y){
	return x.num<y.num;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int sum;
	for(int i=1;i<=n;i++){
		cin>>a[i].s;
		cnt=change(a[i].s);
		a[i].num=cnt;
	}
	sort(a+1,a+n+1,cmp);
	sum=a[1].s;
	for(int i=2;i<=m;i++){
		sum&=a[i].s;
	}
	cout<<sum;
	return 0;
}
