#include<bits/stdc++.h>
using namespace std;
long long n,m;
const int N=5*1e5;
vector<long long> ve;
map<long long,long long> appear;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	ve.push_back(0);
	for(long long i=1;i<=n;i++){
		long long t;
		cin>>t;
		ve.push_back(t);
	}
	for(long long jjj=1;jjj<=n;jjj++){
		vector<bool> vis(n+5,0);
		vector<long long>li(n+5,0);
		long long len=0;
		for(long long t=jjj;t<=n;t++){       
			len++;
			if(vis[ve[t]]==1){
				for(int i=len-1;i>=1;i--){
					if(li[i]==ve[t]){
						len=i;
					}
				}
			}else{
				vis[ve[t]]=1;
			}
			li[len]=ve[t];
		}
		for(long long i=1;i<=len;i++){
			appear[li[i]]=appear[li[i]]+1;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<appear[i]<<' ';
	}
	
	return 0;
}  
