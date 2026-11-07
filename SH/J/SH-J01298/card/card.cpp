#include <bits/stdc++.h>
using namespace std;
int n,m,a[500001],z[300001],zi[300001],s[300001],b[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			s[j]=0;
			zi[j]=0;
			b[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			zi[b[j]]++;
			if(zi[b[j]]==2){
				for(int k=s[b[j]];k<=j-1;k++){
					if(b[k]!=0){
						zi[b[k]]--;
					}
					b[k]=0;
				}
			}
			s[b[j]]=j;
			/*for(int k=1;k<=m;k++){
				cout<<zi[k]<<" ";
			}
			cout<<endl;*/
		}
		//cout<<endl;
		for(int k=1;k<=m;k++){
			z[k]+=zi[k];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<z[i]<<" ";
	}
	return 0;
}
