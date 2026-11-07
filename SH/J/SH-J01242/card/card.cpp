#include<iostream>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500010]={},ans[300010]={};
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		int c=1,b[500010]={},l[300010]={};
		for(int j=i;j<=n;j++){
			if(l[a[j]]!=0 && l[a[j]]<c){
				c=l[a[j]];
			}
			b[c]=a[j];
			l[a[j]]=c;
			c++;
		}for(int j=1;j<c;j++){
			ans[b[j]]++;
		}
	}for(int j=1;j<=m;j++){
		cout<<ans[j]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
