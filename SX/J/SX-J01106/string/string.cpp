#include<bits/stdc++.h>
using namespace std;
char a,h1[200005],h2[200005];
string mm,nn,ss,zz;
int n,p,sum,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>a;
		sum+=p;
		for(int j=i;j<=sum;j++){
			h1[j]=a;
			nn+=h1[j];
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	int j=1;
	for(int i=sum;i>=1;i--){
		h2[j]=h1[i];
		mm+=h2[j];
		j++;
	}
	if(mm==nn) cout<<0;
	else{
		for(int i=1;i<=sum;i++){
			if(j<(sum+1)/2+1) break;
			int j=sum;
			ss=h1[i],zz=h1[j];
			if(ss!=zz) ans++;
			j--;
		}
	}
	cout<<ans;
	return 0;
}