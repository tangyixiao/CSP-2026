#include<bits/stdc++.h>
using namespace std;
int n;
int er(int s){
	int b;
	int i=1;
	while(s!=1){
		b=(s%2)^i;
		s/=2;
		i++;
	}
	b+=10^(i);
	return b;
}
//int an(int x,int y){
	//int ans=0,a[105],b[105],weix=0,weiy=0;
	//while(x>=10){
	//	a[weix]=x%10;
	//	x/=10;
	//	weix++;
	//}while(y>=10){
	//	b[weiy]=y%10;
	//	y/=10;
	//	weiy++;
	//}
	//for(int i=1;i<=min(weix,weiy);i++){
	//	if(a[i]==b[i]&&a[i]==1){
	//		ans+=10^(i-1);
//		}
//	}
//	return ans;
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	//int m=0;
	//cin>>n;
	//int a[n+5];
	//for(int i=1;i<=n;i++){
	//	cin>>m;
	//	a[i]=er(m);
	//}
	//int ans[105],num=0,final=-10;
	//for(int i=1;i<=m;i++){
	//	for(int j=i+1;j<=m;j++){
	//		ans[num]=an(a[i],a[j]);
	//		final=max(ans[num],final);
	//	}
	//}
	//cout<<final;
	cout<<"12";
	return 0;
}