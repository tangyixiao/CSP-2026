#include<bits/stdc++.h>
using namespace std;
long long n,m,a,ans2;
int len=-1;
string s[200010],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ans="0000000000000000000000000000000";
	for(int i=1;i<=n;i++){
		s[i]="0000000000000000000000000000000";
		cin>>a;
		int j=0;
		while(a!=0){
			s[i][j]=a%2+48;
			a/=2;
			j++;
		}
		len=max(len,j-1);
	}
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(s[j][i]=='1'){
				cnt++;
			}else{
				s[j][i]='0';
			}
		}
		if(cnt>=m){
			ans[i]='1';
			for(int j=1;j<=n;j++){
				if(s[j][i]=='0')s[j]="0000000000000000000000000000000";
			}
		}
	}
	for(int i=0;i<30;i++)ans2+=pow(2,i)*(int)(ans[i]-48);
	cout<<ans2;
	return 0;
}
