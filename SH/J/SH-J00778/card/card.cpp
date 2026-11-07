#include<bits/stdc++.h>
using namespace std;

int n,m,a[500005],s[300005],qq[500005],b[300005],b2[300005];
void q(int x,int y){
	for(int j=x+1;j<y;j++){
		b[qq[j]]=0,qq[j]=0;
	}
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		s[i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			qq[j]=0,b[a[j]]=0;
		}
		for(int j=i;j<=n;j++){
			if(b[a[j]]==0){
				qq[j]=a[j];
				b[a[j]]=1,b2[a[j]]=j;
			}else{
				q(b2[a[j]],j);
			}
		}
		for(int j=i;j<=n;j++){
			s[qq[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}
