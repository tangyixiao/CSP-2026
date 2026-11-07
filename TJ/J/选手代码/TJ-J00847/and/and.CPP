#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>a;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		a.push_back(k);
	}
	sort(a.begin(),a.end());
	vector<int>ans;
	int kk=0;
	int kkk=m-1;
	for(int i=a.size()-1;i>=1;i--){
		if(kkk==0){kkk=m;ans.push_back(kk);kk=0;cout<<endl;}
		if(kkk)kk=a[i]&a[i-1];
		kkk--;
	}
	sort(ans.begin(),ans.end());
	cout<<ans[ans.size()-1]; 
	
}

