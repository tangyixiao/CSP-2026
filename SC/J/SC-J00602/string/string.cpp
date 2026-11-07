#include<bits/stdc++.h>
#define sjh0626s return
#define code 0
#define PII pair<int,int>
#define int ll
#define ll long long
#define all(g) g.begin(),g.end()
using namespace std;
int T=1;
const int N=2e5+10;
int b[N],a[N],n,L,sum,mid,diff,cnt;
char ch[N],c[N];
vector<pair<int,char>>lefs,rigs;
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>ch[i];
		L+=b[i];
	}
	if(L%2==1){
		for(int i=1;i<=n;i++){
			if(sum+b[i]<=L/2){
				sum+=b[i];
				a[++cnt]=b[i];
				c[cnt]=ch[i];
			}
			else if(mid==0){
				if(L/2!=sum){
					a[++cnt]=L/2-sum;
					c[cnt]=ch[i];
				}
				a[++cnt]=b[i]-(L/2-sum+1);
				c[cnt]=ch[i];
				mid=cnt;
			}
			else {
				a[++cnt]=b[i];c[cnt]=ch[i];
			}
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(sum+b[i]<=L/2){
				sum+=b[i];
				a[++cnt]=b[i];
				c[cnt]=ch[i];
			}
			else if(mid==0){
				if(L/2!=sum){
					a[++cnt]=L/2-sum;
					c[cnt]=ch[i];
				}
				a[++cnt]=b[i]-(L/2-sum);
				c[cnt]=ch[i];
				mid=cnt;
			}
			else {
				a[++cnt]=b[i];c[cnt]=ch[i];
			}
		}
	}
	for(int i=1,j=cnt;i<mid&&j>=mid;){
		if(c[i]!=c[j]){
			if(a[i]==a[j])diff+=a[i],i++,j--;
			else if(a[i]>a[j])diff+=a[j],a[i]-=a[j],j--;
			else diff+=a[i],a[j]-=a[i],i++;
		}
		else{
			if(a[i]==a[j])i++,j--;
			else if(a[i]>a[j])a[i]-=a[j],j--;
			else a[j]-=a[i],i++;
		}
	}
	cout<<diff;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//cin>>T;
	while(T--)solve();
	sjh0626s code;
}