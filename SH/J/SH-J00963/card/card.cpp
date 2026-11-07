#include<bits/stdc++.h>
#define N 10009
using namespace std;
string S="0";char c[N];
int ans[N],n,m,cnt;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	set<int> d;
//	set<int>::iterator t;
//	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			char ch=c[j];
			int p=S.find(ch);
			if(p>0){
				S.erase(p,S.size()-p);
			}
			S+=ch;
		}
		
		for(int j=1;j<=m;j++){
			int p=S.find('0'+j);
			if(p>0) ans[j]++;
		}
		//cout<<ans[3]<<endl;
//		cout<<ans;
		S="0";
	}
	for(int i=1;i<=m;i++){
		if(ans[i]!=0) cout<<ans[i]<<" ";
	}
	
//	cout<<S;
	return 0;
}
