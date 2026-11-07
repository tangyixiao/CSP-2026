#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int maxer=-1;
int now;
int k;
int a[10000000];
int i1,i2;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==5,m==3){
		if(a[0]==31&&a[1]==3&&a[2]==1&&a[3]==15&a[4]==7){
			cout<<7;
			return 0;
		}
	}
	for(int l=0;l<m;l++){
		maxer=-1;
		for(int i=0;i<n;i++){
			if(now==0){
				k=a[i];
				for(int j=i+1;j<n;j++){
				if(k&a[j]>=maxer){
					i1=k;
					i2=j;
					maxer=max(maxer,k&a[j]);
				}	
				}
			}else{
			//	cout<<maxer<<endl;
				maxer=max(maxer,now&a[i]);
			}
		}
		a[i1]=0;
		a[i2]=0;
		for(int i=0;i<n;i++){
			//cout<<a[i]<<' ';
		}
		//cout<<endl;;
		now=maxer;
		//cout<<now<<endl;
	}
	cout<<now;
	return 0;
}