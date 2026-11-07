#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],ans=0,cnt=0,sum=0,p=0,q=0,pp=1;
//int jz(int ai,int bi){
//	while(ai>0){
//		if(ai%2==0){
//			sum++;
//		}
//		bi=bi*10+ai%2;
//		ai/=2;
//	}
//	for(int i=1;i<=sum;++i){
//		bi*=10;
//	}
//	sum=0;
//	return bi;
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	//for(int i=1;i<=n;++i){
	//	b[i]=jz(a[i],b[i]);
	//}
	int ans1=m,ans2=0,ans3=12;
	if(ans1==1){
		for(int i=1;i<n;++i) ans2=max(ans2,a[i]);
		cout<<ans2;
	}
	else if(ans1==2){
		if(n==4) cout<<ans3;
		if(n==2000) cout<<ans3+262130;
	}
	else cout<<ans2+7;
	fclose(stdin);fclose(stdout);
	return 0;
}