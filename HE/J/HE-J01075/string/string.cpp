#include<bits/stdc++.h>
using namespace std;
string a,t1,t2;long long s,ans;bool bo=false;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;char q[200010];
	cin>>n;
	for(int i=1;i<=n;i++){
		long long o;
		cin>>o>>q[i];
		if(i!=1){
			if(q[i]!=q[i-1]) bo=true;
		}
		s+=o;
		for(int j=1;j<=o;j++){
			a+=q;
		}
	}
	if(!bo){
		cout<<'0';
		return 0;
	}
	for(int i=0;i<s/2;i++)	t1+=a[i];
	for(int i=s/2+1;i<s;i++) t2+=a[i];
	for(int i=0;i<s/2;i++){
		if(t1[i]!=t2[i]) ans++;
	}
	cout<<ans;
	return 0;
}
