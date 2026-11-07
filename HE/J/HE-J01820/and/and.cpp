#include<bits/stdc++.h>
using namespace std;
string a[2*100000+10];
bool is[2*100000+10];
int bin[31];
int y[2*100000+10][40];
string b[2*100000+10];long long ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(is,1,sizeof(is));
	int n,m; bin[0]=1;cin>>n>>m;
	for(int i=1;i<=30;i++){
		bin[i]=bin[i-1]*2;
	}
	int maxa=-1;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		while(t){
			if(t%2){
				a[i]="1"+a[i];
			}
			else{
				a[i]="0"+a[i];
			}
			t/=2;
		}
		while(a[i].size()!=31) a[i]="0"+a[i];
		a[i]=" "+a[i];
	}
	for(int i=1;i<=31;i++){
		int t=0;
		for(int j=1;j<=n;j++){
			if(a[j][i]=='1'&&is[j]){
				t++;
			} 
		}
		if(t<m) continue;
		ans+=bin[31-i];
		for(int j=1;j<=n;j++){
			if(a[j][i]=='0') is[j]=0;
		}
	}

	cout<<ans;
	return 0;
}
