#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+7;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int a,n;
    vector<char> q;
    char p[N];
    char w[N],u[N];
	char f;cin>>a;
    for(int i=1;i<=a;++i)	{
    	cin>>n>>f;
    	for(int j=0;j<n;++j)   {
    		q.push_back(f);
		}
	}
	int len=q.size();
	for(int i=len;i>=0;--i) p[len-i-1]=q[i];
	int sum=0;
	for(int i=0;i<=len;++i)  {
		if(q[i]!=p[i]) sum=1;
	}
	if(sum==0){
		cout<<0<<'\n';return 0;
	}

    n=len/2;
    if(len%2==1) w[len/2]=q[len/2];
	for(int i=0;i<n;++i){
		w[i]=q[i];
		w[len-i-1]=q[i];
	}
	int cnt=0;
	for(int i=0;i<len;++i){
		if(w[i]!=q[i]) cnt++;
	}
	
	int www=0;
	if(len%2==1) u[len/2]=q[len/2];
	for(int i=len;i>=n;--i){
		u[i]=q[i];
		u[len-i-1]=q[i];
	}
	for(int i=0;i<len;++i){
		if(u[i]!=q[i]) sum++;
	}
	cout<<min(www,cnt);
	fclose(stdin);
	fclose(stdout); 
    return 0;
}
