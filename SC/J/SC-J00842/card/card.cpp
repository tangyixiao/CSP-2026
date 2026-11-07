#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m;
    cin>>n>>m;
	vector<int>A(n,0),ans(m+5,0);
	for(int i=0;i<n;i++)cin>>A[i];
	for(int i=0;i<n;i++){
		vector<int>num;
		for(int j=i;j<n;j++){
			if(num.empty()==1){
				num.push_back(A[j]);
			}
			else{
				int flag=0,st;
				for(int i=0;i<num.size();i++){
					if(num[i]==A[j])flag=1,st=i;
				}
				if(flag==1){
					vector<int>num2(st);
					for(int i=0;i<st;i++){
						num2[i]=num[i];
					}
					num.clear();
					for(int i=0;i<st;i++){
						num.push_back(num2[i]);
					}
				}
				num.push_back(A[j]);
			}
		}
		for(int i=0;i<num.size();i++){
			ans[num[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}