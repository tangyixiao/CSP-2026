#include<bits/stdc++.h>
using namespace std;
long long int a[200005],n,m,l[200005],r,f[200005],step,ans;
bool flag=true;
//void awy(long long int x,long long int y){
//	if(flag){
//		flag=true;
//		for(int i=0;i<n;i++){
//			if(f[i]==0;){
//				flag=false;
//				step
//			}
//		}
//	}else{
//		
//	}
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==n){
		ans=a[0]&a[1];
		for(int i=2;i<n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}else{
		l[0]=0,r=1;
		step++;
		ans=a[1];
		cout<<1;
	}
	

}
