#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<utility>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
#define int long long
pair<int,char> str[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>str[i].first>>str[i].second;
	}
	int l=str[1].first,r=str[t].first,i=1,j=t;
	int ans=0;
	while(1){
		if(l>=r){
			if(str[i].second!=str[j].second)ans+=r;
			l-=r;
			r=str[--j].first;
		}else{
			if(str[i].second!=str[j].second)ans+=l;
			r-=l;
			l=str[++i].first;
		}
		if(i==j)break;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
