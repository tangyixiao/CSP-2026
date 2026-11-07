#include <bits/stdc++.h>
using namespace std;
int m,n,card[500000],playing[500000],a,b,res[500000],flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=0;i<n;i++){
		cin>>card[i];
	}
	for (int i=0;i<m;i++){
		for (int j=i;j<m;j++){
			a=card[j];
			for (int k=0;k<j;k++){
				if (playing[k]==a){
					b=k;
					flag=1;
					for (int p=k;p<j;p++){
						playing[p]=0;
					}
				}
			}
			if (flag==0)playing[b+1]=a;
			flag=0;
			playing[b]=a;
		}
		for (int j=i;j<m;j++){
			res[playing[j]]++;
			playing[j]=0;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<res[i]<<' ';
	}
	return 0;
}
