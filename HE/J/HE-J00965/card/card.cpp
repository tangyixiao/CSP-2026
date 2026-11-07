#include<bits/stdc++.h>
using namespace std;
int n,m;
struct aaa{
	bool f;
	int w;
};
aaa maap[100100];
long long a[100100],cnt[100100],b[100100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maap[i].f=false;
	}
	for(int t=1;t<=n;t++){
		int s=1;
		for(int i=t;i<=n;i++){
			if(maap[a[i]].f==false){
				maap[a[i]].f=true;
				maap[a[i]].w=s;
				b[s]=a[i];
			}
			else{
				for(int j=maap[a[i]].w+1;j<=s;j++){
					maap[b[j]].f=false;
					maap[b[j]].w=0;
				}
				s=maap[a[i]].w;
			}
			s++;
		}
		//cout<<"s:"<<s<<endl;
		for(int i=1;i<s;i++){	
		//	cout<<b[i]<<" ";
			cnt[b[i]]++;
		}
		memset(b,0,sizeof(b));
		for(int i=1;i<=n;i++){
			maap[i].f=false;
			maap[i].w=0;
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++){	
		cout<<cnt[i]<<" ";
	}
//4 3
//1 2 1 3
//10 3
//3 1 2 1 3 2 3 1 2 1
	return 0;
} 
