#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n,a[10005];
string c,s[200005];
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i]>>c;
}
int cnt=0;
for(int i=1;i<=a[cnt];i++){
	s[i]=c[i];
	if(cnt<=a[cnt])
		cnt+=0;
	else if(cnt<=a.size())
		cnt++;
	else break;
}
int q=s.size(),w=0,e=0;
for(int i=1;i<=q;i++){
	if(s[i]==s[q-w]){
		w++;
		e+=0;
	}
	else{
		e++;
		w++;
	}
	cout<<w;
}
return 0;
}