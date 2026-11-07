#include <bits/stdc++.h>
using namespace std;
long long myh[500005],wxl[300005],qwe[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int x,y,z=1,asd;
	cin>>x>>y;
	for(int i=1;i<=x;i++){
		cin>>myh[i];
	}
	asd=x;
	while(x){
		for(int i=z;i<=asd;i++){
			if(wxl[myh[i]]==0){
				wxl[myh[i]]=i;
			}else{
				for(int j=1;j<=y;j++){
					if(wxl[j]>wxl[myh[i]]){
						wxl[j]=0;
					}
				}
			}
		}
		for(int j=1;j<=y;j++){
			if(wxl[j]>0){
				qwe[j]++;
				wxl[j]=0;
			}
		}
		z++;
		x--;
	}
	for(int j=1;j<=y;j++){
		cout<<qwe[j]<<" ";
	}
	return 0;
}