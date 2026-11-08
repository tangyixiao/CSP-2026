#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m,sum;
	cin>>n>>m;
	vector<int>a(n); 
	int k=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<*max_element(a.begin(),a.end());
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum=a[i]&a[j];
			int cnt=0;
			for(int k=j+1;k<n;k++){
				sum=sum&a[k];
				cnt++;
				if(cnt==m)break;
			}
			k=max(k,sum);
		}
	}
	cout<<k;
	return 0;
}
