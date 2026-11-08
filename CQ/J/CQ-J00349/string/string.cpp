#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N=1e6+10;
ll a,b,n,s,m,op,f[N];
char c[N];
char s1[30000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f[i]>>c[i];
		op=max(op,f[i]);
	}
	if(op<=500){
		int len=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=f[i];j++)s1[++len]=c[i];
		}
		for(int i=1,j=len;i<=j;i++,j--){
			if(s1[i]==s1[j])continue;
			s++;
		}
		cout<<s;
		return 0;
	}
	for(int i=1,j=n;i<=j;i++,j--){
		if(i==j){
			s+=min(f[i],f[j]);
			break;
		}
		if(c[i]==c[j]&&f[i]==f[j])continue;
		if(c[i]==c[j]){
			if(f[i]<f[j])s+=f[j]-f[i],f[i+1]-=f[j]-f[i];
			else s+=f[i]-f[j],f[j-1]-=f[i]-f[j];
		}
		else if(f[i]==f[j])s+=f[i];
		else{
			if(f[i]<f[j])s+=f[j],f[i+1]-=f[j]-f[i];
			else s+=f[i],f[j-1]-=f[i]-f[j];
		}
	}
	cout<<s;
	return 0;
}

