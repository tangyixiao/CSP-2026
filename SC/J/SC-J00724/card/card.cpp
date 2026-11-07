#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[(int)1e6+10];
int cnt[(int)1e6+10];
int stk[(int)1e6+10];
int res[(int)1e6+10];
signed main(){
	//freopen("C:\\Users\\user.42\\Documents\\down\\card\\card4.in","r",stdin);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	//cout<<n<<' '<<m<<'\n';
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	if(n>=10000){
		int sum=0;
		for(int i=1;i<=m;i++){
			sum+=cnt[i];
			cout<<sum<<' '; 
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int len=0;
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]){
				for(int k=len;k>=1;k--){
					if(a[stk[k]]==a[j]){
						len=k;
						break;
					}else cnt[a[stk[k]]]--;
				}
			}else stk[++len]=j,cnt[a[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(cnt[j]){
				res[j]++;
				cnt[j]=0;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<res[i]<<' ';
	return 0;
}