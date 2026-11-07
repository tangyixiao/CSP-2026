#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005];
int main(){
freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			if(a[i]==a[j])
				for(int h=a[i];h<a[j];h++)
					if(i==j&&i==n)
						b[h]++;
					b[h]--;
			b[a[j]]++;
	for(int i=1;i<=m;i++)
		if(i!=m){
			cout<<b[i]-1<<" ";
		}else{
			cout<<b[i]<<" ";
		}
fclose(stdin);
fclose(stdout);
return 0;
}
