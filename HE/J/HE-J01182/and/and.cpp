#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],maxx,awy,ans,anss;
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	queue<int>ejz[2005],awy;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(a[i],maxx);
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	for(int i=1;i<=n;i++){
		while(a[i]>0){
			ejz[i].push(a[i]%2);
			a[i]=a[i]/2;
		}
	}
	if(m=2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				awy.push(ejz[i].back()==1&&ejz[j].back()==1);
			}
			for(int x=1;awy.empty()==0;x*=2){
				if(awy.back()){
					ans+=x;
				}
				awy.pop();
			}
			anss=max(ans,anss);
		}
	}
	cout<<anss;
	return 0;
}
