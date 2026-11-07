#include<bits/stdc++.h>
using namespace std;
long long n,m,j=1,cnt=0,ans=0;
char a[2000000000005],b[2000000000005];
char s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>s;
		while(m){
			a[j]=s;
			j++;
			m--;
			cnt++;
		}
	}
	int k=cnt;
	if(k%2!=0){
		for(int i=k/2+1,j=k/2+1;i>=1&&j<=k;i--,j++){
			if(a[i]!=a[j]) ans++;
		}
		
	}
	else{
		for(int i=k/2,j=k/2+1;i>=1&&j<=k;i--,j++){
			if(a[i]!=a[j]) ans++;
		}
	}
	cout<<ans;
	return 0;
}

