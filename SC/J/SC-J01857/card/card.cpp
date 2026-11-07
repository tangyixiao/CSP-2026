#include<bits/stdc++.h>
using namespace std;
int n,m;string t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<int> a(n+1);
	
	vector<int> ans(n+1);
	int ma=0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		//cout<<t<<endl;
		t.clear();
		for(int j=i;j<=n;j++){
			if(a[i]>ma){
				ma=a[i];
			}
			bool is=false;
			int pl=-1;
			for(int p=0;p<t.size();p++){
				if(t[p]==a[i]){
					is=true;
					pl=p;	
				}
			}
			if(is){
				for(int l=pl+1;l<t.size();l++){
					t[pl]='w';
				}
			}
			else{
				t+=a[i];
			}
		}
		for(int k=0;k<t.size();k++){
			if(t[k]!='w'){
				ans[t[k]]++;
			}
		}
	}
	//cout<<t<<endl;
	for(int i=1;i<=ma;i++){
		cout<<ans[i];
		if(i!=n) cout<<" "; 
	}
	return 0;
}