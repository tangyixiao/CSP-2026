#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,NN=3e5+5;
long long ans[NN],a[N],y[NN];
string s;
string st;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		s="";
		memset(y,0,sizeof(y));
		for(long long j=i;j<=n;j++){
			long long t=a[j];
			if(y[t]){
				long long len=s.find(t+'0');
				st=s;
				st.erase(0,len+1);
				s.erase(len+1,s.size()-len);
				for(long long k=0;k<st.size();k++){
					y[st[k]-'0']=0;
				}
			}
			else {
				s+=t+'0';
				y[t]=1;
			}
		}
		for(long long j=1;j<=m;j++){
			if(y[j]) ans[j]++; 
		} 
	}
	for(long long i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 