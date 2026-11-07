#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
long long n,ans,sum;
vector<long long>ve;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	cin>>n;
	ve.push_back(0);
	for(int i=1;i<=n;i++){
		long long a1;
		char c1;
		cin>>a1>>c1;
		ve.push_back(ve[ve.size()-1]+a1);
		s+=c1,sum+=a1;
	}
	n=sum;
	for(long long i=0;i<=n-i-1;){
		long long now=lower_bound(ve.begin(),ve.end(),i+1)-ve.begin();
		long long oppo=lower_bound(ve.begin(),ve.end(),n-i)-ve.begin();
		if(s[now-1]!=s[oppo-1])ans+=min(ve[now],n-ve[oppo-1])-i;
		i=min(ve[now],n-ve[oppo-1]);
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}