#include<bits/stdc++.h>
#include<cstdio>
#define ll long long
#define endl '\n'
int q[200001];
char w[200001];
using namespace std;
int main(){
	freopen("string4.in","r",stdin);
	freopen("string1.ans","w",stdout);
	int ans=0;
	string s="";
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int o;
		char p;
		cin>>o>>p;
		for(int i=0;i<o;i++){
			s+=p;
		}
	}
	int l=s.size();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

