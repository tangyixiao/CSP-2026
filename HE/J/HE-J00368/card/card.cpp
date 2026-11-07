#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,a[10],cnt1,cnt2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
	}else{
		for(int j=1;j<=n;j++){
			set<int> st;
			for(int i=j;i<=n;i++){
				
				if(st.find(a[i])!=st.end()){
					st.clear();
				}st.insert(a[i]);
			}
			if(st.find(1)!=st.end()){
				cnt1++;
			}if(st.find(2)!=st.end()){
				cnt2++;
			}
		}
		cout<<cnt1<<" "<<cnt2;
	}//AK_csp
	return 0;
}

