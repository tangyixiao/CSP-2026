#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200010];string book[200010];
map<int,int> mp;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
//	cout<<n<<m;
	for(int i=1;i<=n;i++){
		cin>>a[i];ll aa=a[i];
		for(int j=30;j>=0;j--){
			ll k=(1<<j);
			if(aa>=k){
				aa-=k;
				book[i]+='1';
				mp[j]++;
			}
			else book[i]+='0';
		}
		//cout<<a[i]<<"**\n";
	}
	//sort(book+1,book+1+n);
	string answer;
	for(int i=0;i<=30;i++){
		answer+='0';
	}
	int f=0;ll ans=0;
	for(int j=30;j>=0;j--){
		ll k=(1ll<<j);
		if(!f&&mp[j]>=m){
			f=1;answer[30-j]='1';
			ans+=k;
			//cout<<j;
		}
		//if(f)cout<<ans;
		for(int i=1;i<=n;i++){
			//cout<<i;
			//if(book[i]<answer) cout<<i;
			if(book[i]<answer&&book[i][30-j]=='1'){//cout<<i;
				mp[j]--;//cout<<i<<" "<<j<<"\n";
			}
		}
		if(mp[j]>=m&&answer[30-j]=='0'){
			answer[30-j]='1';
			ans+=k;
			
			//cout<<30-j<<" ";
		}
	}
	
	cout<<ans;
	return 0;
}

