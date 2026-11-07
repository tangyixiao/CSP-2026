#include <bits/stdc++.h>
using namespace std;

void OI(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
}
const int N=2e5+5;
int n,m;
string a[N];
void to2(int i,int x){
	string t;
	if(x==0){
		a[i]="0";
		return;
	}
	while(x>0)
		t+=char('0'+x%2),x/=2;
	for(int j=t.size()-1;j>=0;j--)
		a[i]+=t[j];
}
int len;
void align(){
	for(int i=1;i<=n;i++)
		len=max(len,int(a[i].size()));
	for(int i=1;i<=n;i++)
		while(int(a[i].size())<len)
			a[i]="0"+a[i];
//		for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
vector<int> v;
int ans=0;
void solve(){
	for(int i=len-1;i>=0;i--){
		sort(a+1,a+1+n,greater<string>());
		int cnt=0,p=n+1;
		for(int j=1;j<=n;j++){
			if(a[j][0]=='1')cnt++;
			else{
				p=j;
				break;
			}
		}
		if(cnt>=m){
			v.push_back(i);
			n=p-1;
		}
		for(int j=1;j<=n;j++)
			a[j]=a[j].substr(1);
	}
}
int main(){
	OI();
	scanf("%d%d",&n,&m);
	for(int i=1,x;i<=n;i++){
		scanf("%d",&x);
		to2(i,x);
	}
	align();
	solve();
	for(int x:v)ans+=(1<<x);
	printf("%d",ans);
	return 0;
}
