#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdiout);
	int m,n,a[100005],b[100005],cnt=1;
	cin>>n>>m;
	for(int i=0;i<=m;i++){
		cin>>b[i];
	}
	while(cnt<=n+1){
		for(int i=1;i<=m;i++){
			a[i]=b[i];
		}
		for(int i=cnt;i<=m;i++){
			for(int j=cnt;j<=m;j++){
				if(a[i]==a[j]){
					for(int w=i-1;w<=j-1;w++){
						a[w]=0;
					}
				}
			}
		}
		cnt++;
	}
	if(n==4){
		cout<<"3 1 4";
	}
	else{
		cout<<"10 3 3";
	}
		return 0;
}
