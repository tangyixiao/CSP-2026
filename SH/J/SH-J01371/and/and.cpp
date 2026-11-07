#include<iostream>
#include<algorithm>
#include<cstdio> 
using namespace std;
int n,m,a[200010][30],x[200010],isbanned[200010],bannum;
bool cmp(int gugu,int gaga){
	return (gugu>gaga);
}
int calc(int pos){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(isbanned[i]){
			continue;
		}
		if(a[i][pos]){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n,cmp);
	for(int i=0;i<n;i++){
		for(int j=0;j<30;j++){
			a[i][j]=(x[i]>>j)&1;
		}
	}
	for(int i=29;i>=0;i--){
		if(calc(i)<m&&i>0){
			continue;
		}
		for(int j=0;j<n;j++){
			if(bannum==n-m){
				int ans;
				bool firsttime=true;
				for(int k=0;k<n;k++){
					if(!isbanned[k]){
						if(firsttime){
							ans=x[k];
							firsttime=false;
						}
						else{
							ans&=x[k];
						}
					}
				}
				cout<<ans;
				return 0;
			}
			if(!a[j][i]){
				if(!isbanned[j]){
					bannum++;
				} 
				isbanned[j]=true;
			}
		}
	}
	return 0;
}
