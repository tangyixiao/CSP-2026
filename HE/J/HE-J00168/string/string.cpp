#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005];
	long long m=0;
	char c[200005];
	string s;
	cin>>n;
	cin>>a[1]>>c[1];
	s=c[1];
	for(int i=2;i<=a[1];i++){
		s+=c[1];
	}
	for(int i=2;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int v=s.size()-1;
	for(int i=0;i<s.size()/2;i++){
		if(v<s.size()/2){
			break;
		}
		if(s[i]!=s[v]){
			m++;
		}
		v--;
	}
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
