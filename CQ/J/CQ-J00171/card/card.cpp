#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,s,l;
	cin>>a>>s;
	int f[a+1],zhuo[a+1],ew[s+1],shu[s+1];
	bool we[s+1]={0};
	for(int i=1;i<=a;i++){
		cin>>f[i];
	}
	int o=0;
	for(int i=1;i<=a;i++){
		o=0;
		for(int r=1;r<=s;r++){
			ew[r]=0;
			we[r]=0;
		}
		for(int j=1+i-1;j<=a;j++){
			o++;
			if(we[f[j]]==0){
				zhuo[o]=f[j];
				we[f[j]]=1;
				ew[f[j]]=o;
			}else{
				l=o;
				o=ew[f[j]];
				we[f[j]]=0;
				for(int i=o;i<=l;i++){
					we[f[i]]=0;
					zhuo[i]=0;
				}
			}
	}
	for(int y=1;y<=o;y++){
		shu[zhuo[y]]=shu[zhuo[y]]+1;
		//cout<<zhuo[y];
	} 
	}
	for(int i=1;i<=s;i++){
		cout<<shu[i]<<" "; 
	}
}
