#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,amt,tmp,j,k,ans,f1,f2,cnt1,cnt2;
struct node{
	int a;
	char ch;
}ele[200005];
char c1,c2,chr;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp>>chr;
		ele[i].ch=chr;
		amt+=tmp;
		if(i>1){
			ele[i].a=ele[i-1].a+tmp;
		}
		else ele[i].a=tmp;
	}
	j=1,k=amt,c1=ele[1].ch,c2=ele[n].ch,f1=ele[1].a,f2=ele[n-1].a,cnt1=1,cnt2=n;
	for(int i=amt;i>=amt-amt/2+1;i--){
		if(j>f1){
			cnt1++;
			c1=ele[cnt1].ch;
			f1=ele[cnt1].a;
		}
		if(k<=f2){
			cnt2--;
			c2=ele[cnt2].ch;
			f2=ele[cnt2-1].a;
		}
		if(c1!=c2){
			ans++;
		}
		j++,k--;
	}
	cout<<ans;
	
	return 0;
} 
