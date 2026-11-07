#include<bits/stdc++.h>
using namespace std;
char s[200001];
long long n,len;
long long a[200001];
long long f,w,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		len+=a[i];
	}
	if(len%2==1){
		len--;
		long long jd=0;
		for(int i=1;i<=n;i++){
			if(jd<=len/2&&jd+a[i]>len/2){a[i]--;break;}
			jd+=a[i];
		}
	}
	w=a[n];
	int p;
	for(int l=0,r=n;l,r;){
		p=0;
		if(f<w){l++,f+=a[l];p=1;}
		else{r--;w+=a[r];}
		if(w>len/2&&f>len/2)break;
		if(p){
			if(s[l]!=s[r])ans+=min(a[l],w-f+a[l]);
		}
		else{
			if(s[l]!=s[r])ans+=min(a[r],f-w+a[r]);
		}
	}
	cout<<ans;
	return 0;
}