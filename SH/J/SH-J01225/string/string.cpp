#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int a1;
char a2;
vector<char> v;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin>>a1;
		cin>>a2;
		for(int j=a1;j>=1;j--){
			v.push_back(a2);
		}
	}
	int ans=0;
	int aa=v.size();
	int zh=(aa+1)/2;
	for(int i=1;i<=zh;i++){
		if(v[i]==v[aa-i]) continue;
		else{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
