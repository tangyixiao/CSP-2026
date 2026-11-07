#include<bits/stdc++.h>
using namespace std;
int n,m;
bool HHeLiBiBCNOFNeNaMgAlSiPSClRKCa[300015];
int a[500025],cnt[300015]={0};
stack<int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		memset(HHeLiBiBCNOFNeNaMgAlSiPSClRKCa,0,sizeof(HHeLiBiBCNOFNeNaMgAlSiPSClRKCa));
		for(int j=i;j<n;j++){
			if(HHeLiBiBCNOFNeNaMgAlSiPSClRKCa[a[j]]){
				while(st.top()!=a[j]){
					HHeLiBiBCNOFNeNaMgAlSiPSClRKCa[st.top()]=false;
					st.pop();
				}
			}
			else{
			    HHeLiBiBCNOFNeNaMgAlSiPSClRKCa[a[j]]=true;
			    st.push(a[j]);
			}
		}
		for(int j=1;j<=m;j++){
			if(HHeLiBiBCNOFNeNaMgAlSiPSClRKCa[j]) cnt[j]++;
		}
	}
	for(int i=1;i<m;i++) cout<<cnt[i]<<" ";
	cout<<cnt[m];
	return 0;
}
