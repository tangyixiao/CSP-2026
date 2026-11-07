#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
string s;
int aaaa(string b){
	string h=b; 
	int cnt1=0;
	reverse(h.begin(),h.end());
	for(int i=0;i<b.size();i++){
		if(b[i]==h[i]){
			continue;
		}
		else{
			b[i]=h[i];
			cnt1++;
		}
	}
	return cnt1/2;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	string c;
	reverse(c.begin(),c.end());
	if(s==c){
		cout<<0;
		return 0;
	}
	else{
		cout<<aaaa(s);
	}
	return 0;
}
