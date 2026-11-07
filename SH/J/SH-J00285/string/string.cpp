#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<char> a;
int p;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>p;
	for(int i=1;i<=p;i++){
		int o;
		char asd;
		cin>>o>>asd;
		for(int j=1;j<=o;j++){
			a.push_back(asd);
		}
	}
	int cnt=0;
	for(int i=0;i<a.size();i++){
		if(a[i]!=a[a.size()-1-i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
