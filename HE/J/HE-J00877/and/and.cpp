#include<bits/stdc++.h>
using namespace std;
long long total[200005]={0};
long long a[200005];
bool g[200005]={true};
void er(long long n,long long j){
	string s="";
	while(n!=0){
		s+=(n%2)+48;
		n/=2;
	}
	for(long long i=0;i<s.size();i++){
		if(s[i]=='1'){
			total[j]++;
		}
		else{
			g[j]=false;
		}
	}
}
bool cmp(long long i,long long j){
	if(total[i]>total[j]){
		return a[i]>a[j];
		return total[i]>total[j];
	}
}
int main(){
	bool h=false;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
for(long long i=1;i<=n;i++){
	er(a[i],i);
}
for(int i=1;i<=n;i++){
	if(g[i]==false){
		h=true;
	}
}
if(h==true){
	sort(a+1,a+1+n);
	cout<<a[1];
	return 0;
}
sort(a+1,a+1+n,cmp);
long long ans=a[1];
for(long long i=2;i<=m;i++){
	ans=(ans&a[i]);
}
cout<<ans;
	return 0;
}
