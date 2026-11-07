#include<bits/stdc++.h>
using namespace std;
struct an{
	int flag=1;
	long long num;
}a[200010];
bool cmp(an x,an y){
	if(x.flag!=y.flag) return x.flag>y.flag;
	else return x.num>y.num;
}
long long n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i].num;
		for(int i=1;i<=30;i++){
			if(a[i].num==pow(2,i)) a[i].flag=0;
		}
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m].num;
	return 0;
}