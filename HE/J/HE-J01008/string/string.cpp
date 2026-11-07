#include<bits/stdc++.h>
#define int long long
using namespace std;
struct yyh{
	int a;
	char c;
}m[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int c;
		cin>>m[i].a>>m[i].c;
	}
	for(int i=1;i<=n;i++){
		sum+=m[i].a;
	}
	int bb[sum+5],xx[sum+5];
	char b[sum+5];
	for(int i=0;i<=sum;i++){
		bb[i]=0;
		xx[i]=0;
	}
	int tot=1;
	for(int i=1;i<=n;i++){
		bb[tot]+=(int)m[i].c;
		bb[tot+m[i].a]-=(int)m[i].c;
		tot+=m[i].a; 
	}
	xx[0]=0;
	for(int i=1;i<=sum;i++){
		xx[i]=xx[i-1]+bb[i];
	}
	for(int i=1;i<=sum;i++) b[i]=(char)xx[i];
	int ans=0;
	for(int i=1;i<=sum;i++){
		if(b[i]!=b[sum+1-i]) ans++;
	} 
	cout<<ans/2;
	return 0;
} 
