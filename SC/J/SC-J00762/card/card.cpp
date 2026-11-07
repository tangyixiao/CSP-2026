#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],o,v[300005],fl;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i!=1&&a[i]<a[i-1]){
			fl=1;
		}
	}
	if(fl==0){
		for(int i=1;i<=n;i++){
			v[a[i]]++;
		}
		for(int i=1;i<=m;i++){
			v[i]+=v[i-1];
			cout<<v[i]<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		o=0;
		for(int j=i;j<=n;j++){
			if(i==j){
				b[o++]=a[j];
			}
			else{
				int f=0;
				for(int h=0;h<o;h++){
					if(a[j]==b[h]){
						f=1;
					}
					if(f){
						o=h;
						break;
					}
				}
				b[o++]=a[j];
			}
		}
		for(int h=0;h<o;h++){
			v[b[h]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}