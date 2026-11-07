#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<string>v;
	for(int i=1;i<=n;i++){
		int k;
		string s;
		cin>>k>>s;
		for(int j=1;j<=k;j++) v.push_back(s);
	}
	vector<string>v1;
	for(int i=v.size()-1;i>=0;i--)v1.push_back(v[i]);
	
	int ans1=0;
	int ans2=0;
	if(v1.size()%2!=0){
		for(int i=0;i<v1.size()/2;i++)if(v[i]!=v1[i]) ans1++;
		for(int i=v1.size()/2+1;i<v1.size();i++)if(v[i]!=v1[i]) ans2++;
		cout<<min(ans1,ans2);
	}
	else {
		for(int i=0;i<v1.size()/2;i++)if(v[i]!=v1[i]) ans1++;
		for(int i=v1.size()/2;i<v1.size();i++)if(v[i]!=v1[i]) ans2++;
		cout<<min(ans1,ans2);
	}
	return 0;
	//ÄãºÃÑ½ÆßÆßÀÏÊ¦
}


