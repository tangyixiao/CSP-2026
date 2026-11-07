#include <bits/stdc++.h>
using namespace std;
int n,a,len,ans;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a>>c;
		len+=a;
		for(int j=0;j<a;++j) s+=c;
	}
	for(int i=0,j=len-1;i<=j;++i,--j){
		if(s[i]!=s[j]) ans++;
	}
	cout<<ans;
	return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
struct P{
	int num;
	char c;
} a[200010];
int n;
long long len,js1,js2,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i].num>>a[i].c;
		len+=a[i].num;
	}
	js1=0;
	js2=len-1;
	for(int i=0,j=n-1;js1<js2;){
		if(a[i].c!=a[j].c){
			ans+=min(a[i].num,a[j].num);
		}
		int k=min(a[i].num,a[j].num);
		if(a[i].num<a[j].num){
			js1+=k;
			i++;
			a[j].num-=k;
		}else if(a[i].num>a[j].num){
			js2-=k;
			j--;
			a[i].num-=k;
		}else{
			js1+=k;
			js2-=k;
			i++,j--;
		}
	}
	cout<<ans;
	return 0;
}
*/
