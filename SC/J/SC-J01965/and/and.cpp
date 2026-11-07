#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
bool s[N][35];
int p[35];
bool f[N];
vector <int> out[35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	p[0]=1;
	for(int j=1;j<=30;j++)
		p[j]=p[j-1]*2;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int j=30;
	while(j>=0) {
		int num=0;
		for(int i=1;i<=n;i++){
			if(!f[i]) {
				s[i][j]=a[i]&p[j];
				if(s[i][j]) num++;
				else out[j].push_back(i);
			}
		}//统计个数
		if(num>=m){
			for(auto it:out[j]) f[it]=1;
			ans+=p[j];
			j--;
		}//可以结算
		if(num<m){
			j--;
		}//不可以结算
	}
	cout<<ans;
	return 0;
}