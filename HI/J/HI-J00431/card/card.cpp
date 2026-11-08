#include<bits/stdc++.h>
using namespace std;
int a[10000000],h[10000000],k[100000000],t[10000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//.....
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int d[n+1];
		for(int w=1;w<=m;w++){
			h[w]=0;
		}
		for(int l=i;l<=n;l++){
			for(int p=1;p<=n;p++){
				d[l]=a[l];
			}
			if(h[d[l]]==0){
				h[d[l]]=1;
				k[d[l]]=i;
			} else if(h[d[l]]==1){
				for(int j=k[d[l]];j<l;j++){
					d[j]=0;
					h[d[j]]--;
				}
				h[d[l]]=1;
				k[d[l]]=l;
			}
		}
		for(int s=i;s<=n;s++){
			cout<<d[s]<<" ";
		}
		cout<<endl;
		bool f;
		for(int g=i;g<=n;g++){
			t[d[g]]++;
		}
		for(int o=1;o<=m;o++){
			cout<<t[o]<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}
