#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int N=2e5+10;
int a[N];
char c[N];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int Len=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		Len+=a[i];
	}
	Len/=2;
	vector<pair<int,char>>left,right;
	int Sum_len=0;
	for(int i=1;i<=n;i++){
		if(Sum_len+a[i]<Len){
			Sum_len+=a[i];
			left.push_back({a[i],c[i]});
		}
		else if(Sum_len+a[i]>Len){
			left.push_back({Len-Sum_len,c[i]});
			break;
		}
		else{
			left.push_back({a[i],c[i]});
			break;
		}
	}
	Sum_len=0;
	for(int i=n;i>=1;i--){
		if(Sum_len+a[i]<Len){
			Sum_len+=a[i];
			right.push_back({a[i],c[i]});
		}
		else if(Sum_len+a[i]>Len){
			right.push_back({Len-Sum_len,c[i]});
			break;
		}
		else{
			right.push_back({a[i],c[i]});
			break;
		}
	}
//	for(auto[x,y]:left) cout<<x<<" "<<y<<"\n";
//	cout<<"-------\n";
//	for(auto[x,y]:right) cout<<x<<" "<<y<<"\n";
	int j=0;
	int ans=0;
	for(auto[x,y]:left){
		int Sum=0;
		for(;j<(int)right.size();j++){
			//	Sum+=right[j].first;
			if(Sum+right[j].first<x){
				//	cout<<1<<" "<<x<<" "<<y<<" "<<j<<" "<<right[j].first<<" "<<right[j].second<<'\n';
				Sum+=right[j].first;
				if(right[j].second!=y) ans+=right[j].first;	
			}
			else if(Sum+right[j].first>x){
				//	cout<<2<<" "<<x<<" "<<y<<" "<<j<<" "<<right[j].first<<" "<<right[j].second<<'\n';
				right[j].first-=x-Sum;
				if(right[j].second!=y) ans+=(x-Sum);
				break;
			}
			else{
				//	cout<<3<<" "<<x<<" "<<y<<" "<<j<<" "<<right[j].first<<" "<<right[j].second<<'\n';
				if(right[j].second!=y) ans+=right[j].first;
				j++;
				break;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}
/*

abcbcbacba 2

aaaaacdefg
*/
