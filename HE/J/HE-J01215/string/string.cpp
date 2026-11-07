#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
long long n,a[N],zlen=0,zj,k,zji,ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long yi=1,yj=n;
	while(yi<yj){
		if(c[yi]!=c[yj]){
			if(a[yi]>a[yj]){
				ans+=a[yj];
				a[yi]-=a[yj];
				yj--;
			}else if(a[yi]<a[yj]){
				ans+=a[yi];
				a[yj]-=a[yi];
				yi++;
			}else{
				ans+=a[yi];
				yi++;yj--;
			}
		}else{
			if(a[yi]>a[yj]){a[yi]-=a[yj];yj--;}
			else if(a[yi]<a[yj]){a[yj]-=a[yi];yi++;}
			else if(a[yi]==a[yj]){yi++;yj--;}
		}
	}
	cout<<ans;
	return 0;
}
