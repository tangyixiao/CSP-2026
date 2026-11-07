#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	vector<ull> a(n),t(n);
	vector<char> c(n); 
	vector<char> ch;
	for(int i = 0; i < n; i++){
		cin >> a[i] >> c[i];
		for(int j = 1 ; j <= a[i]; j++){
			ch.push_back(c[i]);
		}
		t[i]=a[i]>>1; 
	}
	bool flag = true;
	vector<char> v;
	for(int i = ch.size()-1; i>=0; i--){
		v.push_back(ch[i]);
	}
	for(int i = 0; i < ch.size(); i++){
		if(ch[i]!=v[i]){
			flag=false;
		}
	}
	if(flag){
		cout<<0;
		return 0;
	}
	ull cnt = 0;
	for(int i = 0; i < n; i++){
		cnt+=t[i];
	}
	cout<<cnt;
	return 0;
}