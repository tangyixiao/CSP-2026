#include<bits/stdc++.h>
using namespace std;
int n;
unsigned long long sum;
struct point{
	long long s,ss;
	char c;
};
point str[200005];
int dfs(){
	int ans=0;
	long long bigl=1,bigr=n,sl=0,sr=0;
	while(sl<=sum){
		while(str[bigr].s>0 && str[bigl].s>0 ){
			if(str[bigr].c!=str[bigl].c)ans++;
			str[bigr].s--;
			str[bigl].s--;
			sl++;
		}
		if(str[bigr].s==0)bigr--;	
		if(str[bigl].s==0)bigl++;
	}
	return ans;
}
int main(){
	freopen("string2.in","r",stdin);
	freopen("string2.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>str[i].ss>>str[i].c;
		str[i].s+=str[i].ss;
		sum+=str[i].s;
	}
	sum>>=1;
	cout<<dfs()<<'\n';
	return 0;
} 