#include<bits/stdc++.h>
using namespace std;
long long n,m,jz=1,fan=1;
long long a[300000];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	while(jz<=a[1]){
		jz*=2;
	}
	jz/=2;
	while(fan<m){
		for(int i=fan+1;i<=n;i++){
			if(a[i]<jz){
				fan=i-1;
				break;
			}
		}
		if(fan<m){
			for(int i=1;i<=fan;i++){
				a[i]-=jz;
			}
			jz/=2;
			sort(a+1,a+n+1,cmp);
		}
	}
	//cout<<jz<<' '<<fan<<endl;
	//for(int i=1;i<=n;i++){
	//	cout<<a[i]<<' ';
	//}
	//cout<<endl;
	int o=a[1];
	for(int i=2;i<=m;i++){
		o&=a[i];
	}
	cout<<o;
}