#include<bits/stdc++.h>
using namespace std;
int main(){//sjy
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[500005],b[500005],c[500005],num[500005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];	
	}
	for(int x=1;x<=n;x++){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		
		for(int i=x,k=1;i<=n;i++,k++){
			a[k]=num[i];
			b[a[k]]++;
			if(b[a[k]]>1){

				for(int j=k-1;a[j]!=a[k];j--)
				{
					a[j]=0;
					b[a[j]]--;
				}
				b[a[k]]--;
				a[k]=0;
			}
		}
		for(int i=1;i<=n;i++){	
			if(a[i])c[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}

}
