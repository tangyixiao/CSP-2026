#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+1000;
int n,m,ans1,ans2;
struct te{
	int t;
	int e;
};
te a[N];
int b[N];
int tte(int x){
	int sum=0;
	while(x>0){
		if(x%2==1){
			sum++;
		}
		x/=2;
	}
	return sum;
}
bool cmp(te x,te y){
	return x.e>y.e;
}
bool cmp1(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i].t);
		a[i].e=tte(a[i].t);
		b[i]=a[i].t;
	}
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp1);
	ans1=a[1].t;
	ans2=b[1];
	for(int i=2;i<=m;i++){
		ans1=ans1&a[i].t;
	}
	for(int i=2;i<=m;i++){
		ans2=ans2&b[i];
	}
	cout<<max(ans1,ans2)<<endl;
	return 0;
}