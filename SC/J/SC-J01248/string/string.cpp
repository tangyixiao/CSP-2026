#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long ans=0;
	cin>>n;
	vector<pair<int,char>> line(n);
	for(int i = 0; i < n ; i++){
		cin>>line[i].first>>line[i].second;
	}
	int exa1=line[0].first,exa2=line[n-1].first;
	char exc1=line[0].second,exc2=line[n-1].second;
	for(int i=0, j=n-1;i<j;){
		if(exc1 != exc2){
			ans+=min(exa1,exa2);
		}
		if(exa1<exa2){
			i++;
			exa2=abs(exa1-exa2);
			exa1=line[i].first;
			exc1=line[i].second;
		}else if(exa1>exa2){
			j--;
			exa1=abs(exa1-exa2);
			exa2=line[j].first;
			exc2=line[j].second;
		}else{
			i++;
			j--;
			exa2=line[j].first;
			exc2=line[j].second;
			exa1=line[i].first;
			exc1=line[i].second;
		}
	}
	cout<<ans;
	return 0;
}