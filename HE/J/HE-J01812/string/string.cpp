#include<bits/stdc++.h>
using namespace std;
int n,and1=0,ans=0;
struct duan{
	int a;
	char c;
}b[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i].a>>b[i].c;
		for(int j=1;j<=b[i].a;j++){
			s+=b[i].c;
		}
		and1+=b[i].a;
	}
	for(int i=0;i<and1/2;i++){
		int l,r;
		l=i;
		r=and1-i-1;
		if(s[l] != s[r]) ans++;
	}
	cout<<ans;

	fclose(stdin);
	fclose(stdout);
	return 0;
}
