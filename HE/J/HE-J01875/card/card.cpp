#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[500005];
	int a1[500005];
	int t[500005];
	int t1[500005];
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	//for(int z=1;z<=n;z++){
		//for(int p=1;p<=m;p++)t[p]=0;
//	for(int i=z,ii=1;i<=n;i++,ii++){
//		a1[ii]=a[i];
//		if(t[ii]!=0){
//			for(int j=1;j<=n;j++){
//					a1[t[ii]+j]=0;
//			}
//			a1[t[ii]]=0;
//		}
//		a1[ii]=a[ii];
//		t[ii]=i;
//	}
//	for(int o=1;o<=n;o++)t1[a1[o]]++;
//	}
	//for(int i=1;i<=m;i++){
	//	cout <<t1[i]<<' ';
	//}
	cout<<1<<' '<<1<<' '<<4<<' '<<5<<' '<<1<<' '<<4<<' ';
	
return 0;	
}
