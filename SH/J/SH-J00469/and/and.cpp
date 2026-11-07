#include<bits/stdc++.h>
using namespace std;
const int N=2*10e5+10;
struct stu{
	int x,b;
}a[N];
int jz(int s){
	int sum=0;
	while(s!=0){
		sum+=s%2;
		s/=2;
	}return sum;
}
bool cmp(stu y,stu z){
	if(y.b!=z.b)  return y.b>z.b;
	return y.x>z.x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].x;
		a[i].b=jz(a[i].x);
	}sort(a+1,a+n+1,cmp);
	long long ans=a[1].x;
	for(int i=2;i<=m;i++){
		ans=(ans&a[i].x);
	}cout<<ans;
	return 0;
}
