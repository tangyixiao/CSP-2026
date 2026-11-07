#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int n,m,a[N],len;
vector<int>num,p;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num.push_back(a[i]);
		
		int l=0,x=a[i];
		while(x){
			l++;
			x>>=1;
		}
		len=max(len,l);
	}
	int ans=0;
	for(int i=len-1;i>=0;i--){
		int cnt=0;
		p.clear();
		for(int j=0;j<num.size();j++){
			if(num[j]&1<<i){
				cnt++;
				p.push_back(num[j]);
			}
		} 
		if(cnt>=m){
			ans+=1<<i;
			num.clear();
			for(int j=0;j<p.size();j++){
				num.push_back(p[j]);
			}
		}
	}
	cout<<ans;
	return 0;
}
