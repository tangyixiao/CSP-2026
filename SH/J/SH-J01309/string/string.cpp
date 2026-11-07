#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000000009;
int n,a[MAXN],cnt,ans,tmp,c[MAXN];
set<int> s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i],cnt++;
		s.insert(c[i]);
	}
	if(s.size()-1==0){
		cout<<"0";
		return 0;
	}
	int left=0,right=cnt;
	do{
		ans+=abs(a[left]-a[right]);
		if(a[left]-a[right]<=0) left++;
		if(a[left]-a[right]>=0) right--;
	}while(left!=right);
	cout<<ans;
	return 0;
}//guaguabaoyou 
