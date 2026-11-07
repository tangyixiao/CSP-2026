#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],aplay[500005][500005],ai[500005];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;++i){
		for(int j=i;j<n;++i){
			aplay[i][j]=a[j];
			int appear[m][2]={0,0};
			for(int l=0;l<j;l++){
				appear[(aplay[i][l])][1]++;
				appear[(aplay[i][l])][2]=l;
				if(appear[(aplay[i][l])][1]>1){
					int w=aplay[i][l];
					for(int o=appear[(aplay[i][l])][2];o<l;j++){
						aplay[i][o]=0;
					}
					aplay[i][(appear[(aplay[i][l])][2])]=w;}}}}
	for(int i=0;i<=n;i++) cout<<ai[i];
	return 0;
}
