#include<bits/stdc++.h>
using namespace std;
int n,cnt;
long long ans;
vector<pair<long long,char> > vec(200010); 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int num;
		char ch;
		cin>>num>>ch;
		if(cnt==0) vec[++cnt]={num,ch};
		else {
			if(vec[cnt].second==ch) vec[cnt].first+=num;
			else vec[++cnt]={num,ch};
		} 
	}
	int l=1,r=cnt;
	while(l<r){
		long long ln=vec[l].first,rn=vec[r].first;
		char lc=vec[l].second,rc=vec[r].second;
		if(lc!=rc){
			ans+=min(ln,rn);
		}
		if(ln>rn){
			r--;
			vec[l].first-=rn;
		} else if(ln==rn){
			l++,r--;
		} else {
			l++;
			vec[r].first-=ln;
		}
	}
	cout<<ans; 
	return 0; 
}
