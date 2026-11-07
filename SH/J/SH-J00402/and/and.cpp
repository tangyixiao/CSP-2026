#include<bits/stdc++.h>
#define int1 long long
using namespace std;
int1 n,m;
struct ejz{
	int1 x;
	int1 y;
}a[200005];
int1 ejzgs(int1 ls){
	int1 tmpans=0;
	while(ls){
		if(ls%2==1) tmpans++;
		ls/=2;
	}
	return tmpans;
}
bool cmp(ejz x1,ejz x2){
	if(x1.y>x2.y) return x1.y>x2.y;
	return x1.x>x2.x;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int1 tmp;
	for(int1 i=1;i<=n;i++){
		cin>>tmp;
		a[i].x=tmp;
		a[i].y=ejzgs(tmp);
	}
	sort(a+1,a+1+n,cmp);
	int1 ans=a[1].x;
	for(int1 i=2;i<=m;i++){
		ans=ans&a[i].x;
	}
	cout<<ans;
	return 0;
} 
