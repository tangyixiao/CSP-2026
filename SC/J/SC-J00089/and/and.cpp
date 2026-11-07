#include<bits/stdc++.h>
using namespace std;
int n,m;
int two[200005][35],andd[35];
struct node {
	int num,nn;
} a[200005];
int maxV;
void ten2two(int n,int lis) {
	int i=1;
	while(n>1) {
		two[lis][i]=(n%2);
		andd[i]+=n%2;
		n/=2;
		i++;
	}
	two[lis][i]=1;
	andd[i]+=1;
	two[lis][0]=i;
	maxV=max(i,maxV);
	return;
}
bool cmp(node a,node b) {
	return a.num>b.num;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		int tmp;
		cin>>tmp;
		a[i].nn=i;
		ten2two(tmp,i);
	}
	int val=1;
	for(int i=1; i<=maxV; i++) {
		if(andd[i]>=m) {
			for(int j=1; j<=n; j++) {
				a[j].num+=two[j][i]*val;
			}
		}
		val*=2;
	}
	sort(a+1,a+n+1,cmp);
	int ans=2147483647;
	for(int i=1; i<=m; i++) {
		ans&=a[i].num;
		cout<<1<<endl;
	}
	cout<<ans;
	return 0 ;
}
//kskbl zdjd wczkbl!
//wo jv ran ba T3 zuo chu lai le ma?
//zhe dao ti guo le wo jiu ai shang liang zi
//ru guo wo ru xuan le qing at wo(luogu:jianzongX(1441888)) 
//niu lai! 
//    __  _               _             __
//   / / | |          ___| |___        !  !
//  / /__| |____     |___   ___|       !  !
// /_____   ____|   __\_\| |/_/__      !  !
//  _____| |_____  |_____   _____|     !  ! 
// |_____   _____|    / /| |\ \         \/
//       | |         / / | | \ \       /  \
//       |_|        /_/  |_|  \_\      \__/
