#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int bin_[N][32];
int bin__[32];
int n,m,ans;
vector<int>ans_;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		int x=a;
		bin_[i][31]=x;
		for(int j=0;a;a>>=1,j++){
			bin_[i][j]=a%2;
			if(a%2)bin__[j]++;
		}
	}
	for(int i=30;i>=0;i--){
		if(bin__[i]>=m){
			for(int j=0;j<n;j++){
				if(bin_[j][i]==1)ans_.push_back(bin_[j][31]);
			}
			break;
		}
	}
	sort(ans_.begin(),ans_.end(),greater<int>());
	ans=ans_[0];
	for(int i=1;i<m;i++){
		ans&=ans_[i];
	}
	cout<<ans;
	/*̰......̰*/ 
	return 0;
}
