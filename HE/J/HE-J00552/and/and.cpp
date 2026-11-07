#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
long long a[maxn];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	long long ans=-1;
	cin>>n>>m;
	vector<long long> b(n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int i;
	for(int j=1;j<=m;j++){
		for(i=1;i<=n;i++){
		    ans=max(ans,a[i]);	
		}b[j]=ans;
	    if(ans=a[i])a[i]=0;
    }
    int ansz=-1;
    sort(b.begin(),b.end(),cmp);
    for(int i=1;i<=b.size();i++){
    	ansz=b[i]&b[i+1];
	}
	cout<<ansz<<endl;
}
