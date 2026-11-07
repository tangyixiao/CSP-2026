#include<bits/stdc++.h>
using namespace std;

long long a[300001],p[500001],b[300001],c[300001],j;
int n,m;
int main(){
//	freopen("card.in","r",stdin);
//  freopen("card.out","w",stdout);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);



	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		a[p[i]]++;
		b[p[i]]=i;
	}
	while(j<=n){
		j++;
		for(int i=j;i<=n;i++){
			c[p[i]]++;
			i=b[p[i]];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	/*
	while(j<=n){
		
		j++;
		long long a[2001],b[2001];
		for(int i=j;i<=n;i++){
			a[s[i].p]++;
			if(a[s[i].p]==2){
				for(int l=b[s[i].p];l<=i;l++){
					a[s[l].p]=0;
					s[l].y--;
				}
			}
			a[s[i].p]++;
			b[s[i].p]=i;
			s[i].y++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i].y<<" ";
		
	}*/
	fclose(stdin);
	fclose(stdout);

	return 0;
}

