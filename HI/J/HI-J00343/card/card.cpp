#include<bits/stdc++.h> 
using namespace std;
int n,m,k=1,c[2000003]={0};
int index(int g){
	for (int i=1;i<=n;i++){
		if(c[i]==g) return i;
	}
	return -1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int a[m+1]={0},b[n+1];
	for (int i=1;i<=n;i++){
		cin>>b[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			if(index(b[j])!=-1){
				
				for(int s=index(b[j]);s<=k;s++){
					c[s]=0;
					k--;
				}
			}
			c[k]=b[j];
			k++;
			for(int y=1;y<k;y++) cout<<c[y]<<' ';cout<<endl;
		}
		for(int o=1;o<k;o++){
			a[c[o]]++;
		}
		for(int r=1;r<k;r++) c[r]=0;
		k=1;
	}
	for(int i=1;i<=m;i++){
		cout<<a[i]<<' ';
	}
	return 0;
} 
