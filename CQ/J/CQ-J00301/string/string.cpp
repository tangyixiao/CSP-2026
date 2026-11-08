#include<bits/stdc++.h>
using namespace std;
int n,a[200005],cnt,ans;
long long sum;
char c[200005];
string s=" ";
int main(){
	freopen("string.in","r",stdin),freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0),cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i],sum+=a[i];
	if(sum<=2e9){
		for(int i=1;i<=n;i++) while(a[i]--) s+=c[i],cnt++;
		for(int i=1;i<=(cnt>>1);i++) ans+=(s[i]!=s[cnt-i+1]);
		cout<<ans;
	}else cout<<"Sorry,I can`t solve it.Please try again later?";
	return 0;
}
