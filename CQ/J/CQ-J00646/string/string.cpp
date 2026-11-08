#include<bits/stdc++.h>
using namespace std;
int n;
long long sum,num,ans;
string s,s1,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num>>c;
		sum+=num;
		for(int j=1;j<=num;j++) s1+=c;
		s+=s1;
	}
	for(int i=0;i<=floor((sum*1.0)/2.0);i++){
		if(s[sum-i+1]!=s[i]) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
