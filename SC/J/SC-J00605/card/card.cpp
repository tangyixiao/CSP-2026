#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int num[3010]={};
int cd[3010]={};
int main(){
	freopen("card3.in","r",stdin);
	freopen("card.out","w",stdout);
	for(int i=0;i<3005;i++)num[i]=-1;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int cnt=0; 
		for(int j=i;j<n;j++){
			if(num[a[i]]==-1){
				num[a[i]]=i;
				cnt++;
			}else{
				cnt-=i-num[a[i]];
			}
		}
		cd[cnt]++;
	}
	for(int i=0;i<m;i++)cout<<cd[i]<<" ";
	return 0;
}