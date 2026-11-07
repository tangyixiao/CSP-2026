#include<bits/stdc++.h>
using namespace std;
const int N=2e5;

int n,m,ans;
int a[N+5];
bool dl[N+5];

int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    for(int i=(1<<30);i;i>>=1){
    	int cnt=0;
	    for(int j=1;j<=n;j++)
	    	if(a[j]&i && (!dl[j])) cnt++;
	    //cout<<i<<' '<<cnt<<endl;
    	if(cnt>=m){
    		ans+=i;
    		for(int j=1;j<=n;j++)
    			if(!(a[j]&i))
    				dl[j]=1;
		}
	}
	cout<<ans<<'\n';
    return 0;
}
