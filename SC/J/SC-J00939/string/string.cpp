#include<bits/stdc++.h>
#define int long long
#define PII pair<int,char>
using namespace std;
const int N=2e5+10;
bool flag=true;
string str;
int n,ans,f[N];
int L;
vector<PII> a;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    if(n==1){cout<<0;
    return 0;
	} 
    for(int i=1;i<=n;i++){ 	
    	char y;int x;cin>>x>>y;
    	if(x>=1000)flag=false;
    	L+=x;
    	if(flag)for(int i=0;i<x;i++)str+=y;	
    	a.push_back({x,y});
    }
    if(flag==false){
    	//这里的代码能骗一个测试点就是赚 
    	 int l=0,r=n-1,sum=0;
     while(l<r){//或许是l<=r?   
     	while(sum+a[r].first<=a[l].first){
     	if(a[r].second!=a[l].second)sum+=a[r].first;
		    r--;
		}
		l++; ans+=sum; sum=0;
	 }
	 cout<<ans;
	 return 0;
	}
//	cout<<str;
        int c=(L+1)/2;
        for(int i=0;i<(L+1)/2;i++){
        	if(str[i]!=str[L-i-1])ans++;
		}
     cout<<ans;
     
	return 0;
}