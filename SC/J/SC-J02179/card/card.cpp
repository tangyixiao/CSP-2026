#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m;cin>>n>>m;
	vector<int>A(n+1),ans(m+1);vector<bool>b(m);
	for(int i=1;i<=n;i++)cin>>A[i];
	for(int i=1;i<=n;i++){
		//cout<<"第"<<i<<"轮------------------\n";
		for(int j=1;j<=m;j++)b[j]=0;
		vector<int>num;
		for(int j=i;j<=n;j++){
			if(!b[A[j]])b[A[j]]=1,num.push_back(A[j]);
			else{
				for(int k=0;k<num.size();k++){
					if(num[k]==A[j]){//如果为相同元素
						for(int t=k+1;t<num.size();t++)b[num[t]]=0;
						num.resize(k+1);
					}
				}
			}
//			cout<<"\n-------";
//			for(int k=0;k<num.size();k++)cout<<num[k]<<" ";
//			cout<<"\n-----------\n\n";

		}
		for(int k=0;k<num.size();k++)ans[num[k]]++;
//		cout<<"\n";
	}
	for(int i=1;i<m;i++)cout<<ans[i]<<" ";cout<<ans[m];
	return 0;
}