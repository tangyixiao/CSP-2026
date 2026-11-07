#include<bits/stdc++.h>
using namespace std;
int m,n,a[500005],s[500005];
long long b[500005][2],sum[500005];
int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			b[i][0]=0;
			b[i][1]=0;
			s[i]=0;
		}
		int q=1;
		for(int i=k;i<=n;i++){
			if(b[a[i]][0]==0){
				s[q]=a[i];
				b[a[i]][0]=1;
				b[a[i]][1]=i;
				q++;
			}else{
				int w=b[a[i]][1],e=q;
				for(int j=b[a[i]][1];j<=e;j++){
					b[a[j]][0]=0;
					b[a[j]][1]=0;
					s[j]=0;
				}
				b[a[i]][0]=1;
				b[a[i]][1]=i;
				s[w]=a[i];
				q=w;
				q++;
			}
		}
		for(int i=1;i<=n;i++){
			if(s[i]!=0)sum[s[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<sum[i]<<" ";
	return 0;
}