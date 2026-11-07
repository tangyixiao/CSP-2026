#include<bits/stdc++.h>
using namespace std;
int a[500005][2];
int b[500005];
int n,m;
void shou(int c,int d){
	//cout<<c<<" "<<d<<endl;
	for(int i=1;i<=d;i++){
		if(a[i][0]==0) continue;
		if(a[i][1]==c){
			for(int j=i;j<=d;j++){
				a[j][0]=0;
			}
			break;
		}
	}
//	for(int j=1;j<=n;j++){
//		cout<<a[j][0]<<" ";
//		//	if(a[j][0]==1) b[a[j][1]]++;
//	}
//	cout<<endl;
}
int main(){
	freopen("card5.in","r",stdin);
	freopen("card5.ans","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i][1];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) a[j][0]=0;
		for(int j=i;j<=n;j++){
			a[j][0]=1;
			shou(a[j][1],j-1);
			
		}
		for(int j=1;j<=n;j++){
		//	cout<<a[j][0]<<" ";
			if(a[j][0]==1) b[a[j][1]]++;
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
