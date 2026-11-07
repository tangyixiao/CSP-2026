#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e5+10;

int n,m;

int a[N];

long long ans[M];

vector<int> t;
int v[M];

int p[M];

int cnt[M];

int flag=1;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			flag=0;
			break;
		}
	}
	
	if(flag==1){
		
		
		
		for(int i=1;i<=n;i++){
		
			for(int j=i;j<=n;j++){
				
				cnt[a[j]]++;	
				
			}
			
			for(int j=1;j<=m;j++){
				if(cnt[j]){
					ans[j]++;
				}
				cnt[j]=0;
			}
				
		}
		
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
		
	}
	else{
		for(int i=1;i<=n;i++){
			
			for(int j=i;j<=n;j++){
				
				if(!v[a[j]]){
					t.push_back(a[j]);
					p[a[j]]=t.size()-1;
					v[a[j]]=1;
				}
				else{
					for(int k=p[a[j]];k<t.size();k++){
						v[t[k]]=0;
						p[t[k]]=0;
					}
					t.push_back(a[j]);
					p[a[j]]=t.size()-1;
					v[a[j]]=1;
				}
				
			}
			
			
			for(int j=1;j<=m;j++){
				if(v[j]) ans[j]++;
				v[j]=0;
				p[j]=0;
			}
			
			t.clear();
			
		}
		
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}		
	
	return 0;
}