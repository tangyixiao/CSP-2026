#include <bits/stdc++.h>
using namespace std;
const int N=2e6+5;
struct abc{
	long long a;
	char c;
}s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long l=0;
	for (int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
		l+=s[i].a;
	}
	if (l<=200000){
		char cc[200005]={'\0'};
		long long cnt=1;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=s[i].a;j++)cc[cnt++]=s[i].c;
		}
		long long ans=0;
		for (int i=1;i<=l/2;i++){
			if (cc[i]!=cc[l-i+1])ans++;
		}
		cout<<ans;
	}else{
		long long cnt=0,i=1;
		vector <abc> v;
		while (i<=n && cnt<=l/2){
			cnt+=s[i].a;
			if (cnt>l/2)break;
			v.push_back(s[i]);
			i++;
		}
		long long tmp=(l+1)/2-(cnt-s[i].a)-1;
		if (tmp!=0)v.push_back({tmp,s[i].c});
		vector <abc> v1;
		if (cnt-(l+1)/2!=0)v1.push_back({cnt-(l+1)/2,s[i].c});
		i++;
		while (i<=n){
			v1.push_back(s[i]);
			i++;
		}
		vector <pair<long long,long long> > mp[29];
		long long id=1;
		for (int i=0;i<v.size();i++){
			mp[(int)(v[i].c-'a'+1)].push_back({id,id+v[i].a-1});
			id+=v[i].a;
		}
		vector <pair<long long,long long> > mp1[29];
		id=1;
		for (int i=0;i<v1.size();i++){
			mp1[(int)(v1[i].c-'a'+1)].push_back({id,id+v1[i].a-1});
			id+=v1[i].a;
		}
		long long ans=0;
		for (int i=1;i<=26;i++){
			for (int j=0;j<mp[i].size();j++){
				for (int k=0;k<mp1[i].size();k++){
					if (mp[i][j].second>=mp1[i][k].first && mp[i][j].first<=mp1[i][k].second){
						ans+=max(mp[i][j].second-mp1[i][k].first+1,mp[i][j].first-mp1[i][k].second+1);
					}
				}
			}
		}
		cout<<l/2-ans;
	}
	return 0;
}
