#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],num[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,k;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			k=a[j];
			if(!b[k]) b[k]=1;
			else{
				for(int y=1;y<=m;y++)
					b[y]=0;
				b[k]=1;
			}
		}for(int j=i;j<=n;j++){
			k=a[j];
			if(b[k]) num[k]++;
		}
	}
	
	for(int i=1;i<=m;i++)
		cout<<num[i]<<' ';
	cout<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}

