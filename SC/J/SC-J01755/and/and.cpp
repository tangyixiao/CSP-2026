#include<bits/stdc++.h>
using namespace std;
const int MAXN=2*1e5+10;
int a[MAXN];
vector<int>ans;
bool temp1[32],temp2[32];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1; i<=n; i++) {
		for(int j=i+1; j<=n; j++) {
			int a1=a[i],a2=a[j];
			int z=31;
			while(a1>=1) {
				temp1[z]=a1%2;
				a1/=2;
				z--;
				
			}
			
			z=31;
			while(a2>=1) {
				temp2[z]=a2%2;
				a2/=2;
				z--;
				
			}
			
			int ans1=0;
			int y=0;
			for(int z=31;z>=0;z--){
				ans1+=(temp1[z]&temp2[z])*pow(2,y);
				y++;
			}
			
			ans.push_back(ans1);
		}
	}
	sort(ans.begin(),ans.end());
	cout<<ans[ans.size()-1];
	return 0;
}
