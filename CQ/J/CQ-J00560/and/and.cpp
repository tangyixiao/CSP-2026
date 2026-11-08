#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005];
int b[200005][35],c[35];
string s[200005];
int f[35];
bool cmp(string x,string y){
	return x>y;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int x=a[i],cnt=0;
		while(x){
			if(x&1) b[i][cnt]=1;
			cnt++;
			x/=2;
		}
		string s1;
		for(int j=30;j>=0;j--){
			char c=b[i][j]+'0';
			s1+=c;
		}
		s[i]=s1;
	}
	sort(s+1,s+1+n,cmp);
	for(int i=1;i<=n;i++){
		for(int j=0;j<=30;j++){
			c[j]+=(s[i][j]=='1');
		}
	}
	for(int i=0;i<=30;i++){
		if(c[i]<m) continue;
		for(int j=1;j<=n;j++){
			if(s[j][i]=='1'){
				for(int k=1;k<=m;k++){
					for(int l=0;l<=30;l++){
						if(s[j+k-1][l]=='1') f[l]++;
					}
				}
				break;
			} 
		}
		break;
	}
	int ans=0;
	for(int i=0;i<=30;i++){
		ans+=(f[i]==m)*pow(2,30-i);
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
