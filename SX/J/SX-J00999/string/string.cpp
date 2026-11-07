#include<bits/stdc++.h>
#define endl '\n'
#define N 200005
using namespace std;
int n,i,j,cnt,x;
long long ans,c[N][2],d[N][2],sum,s;
char op;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i][0]>>op;
		c[i][1]=op-'a';
		sum+=c[i][0];
	}
	for(int i=1;i<=n;i++){
		s+=c[i][0];
		if(s>sum/2){
			d[++cnt][0]=(sum/2)-(s-c[i][0]);
			d[cnt][1]=c[i][1];
			d[++cnt][0]=s-(sum/2)-(sum%2);
			d[cnt][1]=c[i][1];
			s=0;
		}
		else{
			d[++cnt][0]=c[i][0];
			d[cnt][1]=c[i][1];
		}
	}
	i=1,j=cnt;
	while(i<j){
		if(d[i][1]!=d[j][1])
			ans+=min(d[i][0],d[j][0]);
		if(d[i][0]<d[j][0])
			d[j][0]-=d[i][0],i++;
		else if(d[i][0]>d[j][0])
			d[i][0]-=d[j][0],j--;
		else if(d[i][0]==d[j][0])
			i++,j--;
	}
	cout<<ans;
	return 0;
}