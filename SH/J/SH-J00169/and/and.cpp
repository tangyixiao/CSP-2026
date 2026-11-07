#include<iostream>
#include<vector>
#define N 200010
#define ll long long
using namespace std;
int n,m;
int ma,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in" ,"r",stdin );
	freopen("and.out","w",stdout);
	cin>>n>>m;
	vector<int>a(n),b;
	for(int i=0;i<n;ma=max(ma,a[i]),i++)cin>>a[i];
	int shuwei=0;
	while(ma){
		shuwei++;
		ma>>=1;
	}
	while(shuwei>=0){
		for(int aa:a){
			if((aa>>shuwei)&1)
				b.push_back(aa);
		}
		if((int)b.size()>=m){
			ans+=1<<shuwei;
			a=b;
		}
		b.clear();
		shuwei--;
	}
	cout<<ans;
	return 0;
}
