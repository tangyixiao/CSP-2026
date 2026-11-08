#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int N=2e5+10;
int n,m,a[N],f[2010][2010],s[N],lg[35];
bool cmp(int x,int y){
	//if(x==4) return 0;
	//if(y==4) return 0;
	return x>y;
}
bool cmp2(int x,int y){
	//if(x==lg[(int)log2(x)]) return 0;
	//if(y==lg[(int)log2(y)]) return 0;
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	lg[0]=1;
	for(int i=1;i<=30;i++) lg[i]=lg[i-1]*2;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=20){
		for(int i=1;i<=n;i++) f[i][1]=a[i];
		for(int i=1;i<=n;i++){
			for(int j=2;j<=m;j++){
				for(int k=1;k<i;k++){
					if(i==4){
						int kkk=f[i][j-1]&a[k];
						///cout<<kkk<<" ";
					}
					f[i][j]=max(f[i][j],(f[k][j-1]&a[i]));
				}
				///cout<<"\n";
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++) ans=max(ans,f[i][m]);
		cout<<ans;
		return 0;
	}
	else if(n<=2000&&n>=20){
		if(m==1){
			int ans=0;
			for(int i=1;i<=n;i++) ans=max(ans,a[i]);
		}
		else if(m==n){
			int ans=1;
			for(int i=1;i<=n;i++) ans&=a[i];
			cout<<ans;
		}
		else if(m==2){
			sort(a+1,a+n+1);
			int ans=1;
			for(int i=1;i<n;i++){
				int cnt=a[i]&a[i+1];
				ans=max(ans,cnt);
			}
			cout<<ans;
			return 0;
		}
	}
	else if(n>2000){
		bool bj1=1,bj2=1,bj3=1;
		for(int i=1;i<=n;i++){
			if(lg[(int)log2(i)+1]-1!=a[i]) bj1=0;
			if(a[i]!=i-1) bj2=0;
			if(a[i]>4) bj3=0;
		}
		if(bj1){
			sort(a+1,a+n+1);
			int ans=1;
			for(int i=n;i>=n-m+1;i--){
				ans&=a[i];
			}
			cout<<ans;
			return 0;
		}
		else if(bj3){
			sort(a+1,a+n+1,cmp);
			int ans=1;
			for(int i=1;i<=m;i++){
				ans&=a[i];
			}
			cout<<ans;
			return 0;
		}
		else{
			
			sort(a+1,a+n+1,cmp2);
			//cout<<1;
			int ans=1;
			for(int i=1;i<=m;i++){
				ans&=a[i];
			}
			cout<<ans;
			return 0;
		}
	}
	return 0;
}
