#include<bits/stdc++.h>
using namespace std;
const int N=2e5+9;
int n,m,a[N];
vector<int> num,num1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num.push_back(a[i]);
	}
	int ans=0;
	for(int i=29;i>=0;i--){
		num1.clear();
		for(int j=0;j<num.size();j++){
			if((num[j]>>i)&1){
				num1.push_back(num[j]);
			}
		}
		if(num1.size()>=m){
			swap(num,num1);
			ans+=1<<i;
		}
	}
	cout<<ans<<endl;
	return 0; 
}
