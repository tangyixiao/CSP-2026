#include<bits/stdc++.h>
using namespace std;
deque<pair<char,long long>> d;
int main(){
	char a;
	long long num,n,ans=0,j;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	j=n-1;
	for(long long i=0;i<n;i++){
		cin>>num>>a;
		d.push_back({a,num});
	}
	long long i=0;
	for(;;){
		if(i>n-1||j<0||i==j||i>j) break;
		if(d[i].first==d[j].first){
			if(d[i].second>d[j].second){
				d[i].second-=d[j].second;
				j--;
			}
			if(d[i].second==d[j].second){
				i++;
				j--;
			}
			if(d[i].second<d[j].second){
				d[j].second-=d[i].second;
				i++;
			}
		}
		if(d[i].first!=d[j].first){
			if(d[i].second>d[j].second){
				d[i].second-=d[j].second;
				ans+=d[j].second;
				j--;
			}
			if(d[i].second==d[j].second){
				ans+=d[i].second;
				i++;
				j--;
			}
			if(d[i].second<d[j].second){
				d[j].second-=d[i].second;
				ans+=d[i].second;
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
