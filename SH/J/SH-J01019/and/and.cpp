#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
bool b[N][35];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.ans","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	for(int i=1;i<=n;i++){
		int i3=0;
		int a1=a[i];
		while(a1){
			b[i][i3++]=a1%2;
			a1/=2;
		}
	}
	bool flag=0;
	int i1=0;
	int ans2=m+1;
	for(int i=32;i>=1;i--){
		int ans1=0;
		for(int j=1;j<=n;j++){
			ans1+=b[j][i];
		}
		if(ans1>=m){
			ans2=ans1;
			flag=1;
			i1=i;
			break;
		}
	}
	if(!flag){
		cout<<0;
		return 0;
	}
	while(flag==1&&i1<=32){
		flag=0;
		for(int i=32;i>=i1;i--){
			int ans1=0;
			for(int j=1;j<=n;j++){
				if(b[j][i1]==0) b[j][i]=0;
				ans1+=b[j][i];
			}
			if(ans1>=m){
				ans2=ans1;
				i1=i;
				break;
			}
			if(i==32) flag=0;
		}
	}
	int cnt=0;
	for(int i=1;i<=n&&cnt<=m;i++){
		if(b[i][i1]==1){
			if(ans==0) ans=a[i];
			else ans=ans&a[i];
			cnt+=1;
		}
	}
	cout<<ans;
	return 0;
}
