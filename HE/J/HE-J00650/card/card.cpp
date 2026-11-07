#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,s[1000];
	bool t;
	int a[100000]={0};
	for(int i=1;i<=m;i++){
		s[i]=0;
	}
	for(int p=1;p<=n;p++){
		for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=i;j++){
			if(a[i]==a[j]){
				t=1;
			}
			else t=0;
		}
		if(t==1){
			for(int k=1;k<=i;k++){
				a[k-1]=0;
				//a[n]=0;
			}
			a[1]=a[i];
		}
		}
		for(int u=1;u<=n;u++){
			for(int x=1;x<=m;x++){
				if(a[u]==x){
					s[x]++;
				}
			}
		}
	}
	for(int x=1;x<=m;x++){
				cout<<s[x]<<" ";
			}
	return 0;//Trick||Treat!
}
