#include<bits/stdc++.h>
using namespace std;
int num[300005],a[500005],b[500005],now[300005];
int n,m;
/*int panduan(int p,int l){
	
	return true;
}*/
/*int chazhao(int p){
	for(int i=1;i<=n;i++){
		
	}
}*/
void shou(int l,int x){
//	cout<<"hi"<<endl;
	for(int i=0;i<l;i++){
		if(b[i]==x){
			for(int j=i+1;j<=l-1;j++){
				now[a[j]]--;
				b[j]=0;
			}
			return;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			now[j]=0;
		}
		int temp=i;
		for(int j=0;j<=n-i;j++){
			b[j]=a[temp];
			now[a[temp]]++;
			temp++;
			if(now[a[temp-1]]>1){
				shou(j+1,a[temp-1]);
			}
		}
		for(int j=1;j<=m;j++){
			if(now[j]==1){
				num[j]++;
//				cout<<"di "<<i<<" ju"<<j<<endl;
			} 
			
		}
/*		for(int j=0;j<=n-i;j++){
			cout<<b[j]<<" "<<endl;
		}*/
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
} 
