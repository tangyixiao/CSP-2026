#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200090],sum,c[200090],f;
char b[200090];
string s,v,t;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	for(int i=0;i<s.size()/2;i++){
		v[i]=s[i];
	}
	if(s.size()%2==1){
		f=s.size()/2+1;
	}else{
		f=s.size();
	}
	int q=0;
	for(int i=s.size()-1;i>=f;i--){
		t[q]=s[i];
		q++;
	}
	for(int i=0;i<s.size()/2;i++){
		if(t[i]!=v[i])sum++;
	}
	cout<<sum;
	return 0;
}
