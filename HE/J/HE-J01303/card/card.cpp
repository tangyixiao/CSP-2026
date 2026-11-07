#include<bits/stdc++.h>
using namespace std;
bool b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	vector<int>v;
	int n,m;cin>>n,m;
	int a[500005];
	for(int i=0;i<=n;i++){
		
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++){
			for(int k=i;k<=j;k++){
				if(v[k]==a[j])
				{
					v[v.size()-1]=0;
					while(v[v.size()-1]!=a[j]);
				{
				}
			}
		}
		for(int j=1;j<=v.size()-1;j++){
			ans++;
		}
	}
	for(int i=1;i<=n;i++){
		
	}
}
cout<<ans<<endl;
return 0;
}
