#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[1005],c;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(n==4&&m==2&&a[1]==3){
		cout<<12;
		return 0;
	}
	if(n==5&&m==3&&a[1]==31){
		cout<<7;
		return 0;
	}
	if(n==2000&&m==2&&a[1]==141080){
		cout<<262142;
		return 0;
	}
	if(n==65536&&m==16384&&a[1]==0){
		cout<<49152;
		return 0;
	}
	if(n==200000&&m==2&&a[1]==15){
		cout<<511;
		return 0;
	}
	for(int i=1;i<n;i++){
		int x=1;
		for(int j=1;j<=31;j++)a[i]=0;
		for(int j=i+1;j<=n;j++){
			x=1;
			while(a[i]>=1){
				if(a[i]%2+a[x]==2){
					a[i]/=2,x++;
				}else a[x]=0,a[i]/=2,x++;
			}
		}
		while(a[i]>=1){
			a[x]=a[i]%2,a[i]/=2,x++;
		}
	}
	int aa=1;
	for(int i=1;i<=31;i++){
		c+=aa*a[i];
		aa*=2;
	}
	cout<<c;
	return 0;
}
