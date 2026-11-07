#include<bits/stdc++.h>
using namespace std;
long long sum,cnt,tot,ans;
string s;
int n,f,fl;
struct node{
	long long a;
	char c;
}m[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i].a;
		cin>>m[i].c;
		sum+=m[i].a;
		s+=m[i].c;
		if(m[i].c!=m[i-1].c&&i!=0) f=1;
		if(m[i].a!=1) fl=1;
		if(m[i].c==m[i-1].c&&i!=0)cnt++;
		tot+=m[i].a;
	}
	if(f==0) cout<<0;
	else{
		if(n==2) cout<<min(m[0].a,m[1].a);
		else if(fl==0){
			if(cnt==0)cout<<sum/2;
			else{
				if(cnt>sum-cnt) cout<<sum-cnt;
				else{
					cout<<sum/2;
				}
			}
		}
		else{
			for(int i=0;i<n/2;i++){
				if(m[i].c!=m[n-i-1].c){
					if(m[i].a==m[n-i-1].a){
						ans+=m[i].a;
					}
					else ans+=abs(m[i].a-m[n-i-1].a);
				}
			}
			cout<<ans;
		}
	} 
	return 0;
}