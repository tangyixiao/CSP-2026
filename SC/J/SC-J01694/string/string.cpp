#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<int> a;
	vector<char> c;
	a.push_back(-1);
	c.push_back('\0');
	int L=0;
	for(int i=1;i<=n;i++){
		int ax;
		char cx;
		cin>>ax>>cx;
		L+=ax;
		a.push_back(ax);
		c.push_back(cx);
	}
	int num=L/2+1;
	int ans=0;
	for(int i=1;i<=num;i++){
		int x1=lower_bound(a.begin(),a.end(),i)-a.begin(),x2=upper_bound(a.begin(),a.end(),L-i)-a.begin()-1;
		if(x1>=x2) break;
		if((c[x1])==(c[x2])) continue;
		ans++;
	}
//	for(int i=1,j=(int)a.size()-i;i<=(int)a.size()/2;i++){
//		
//	}
	cout<<ans;
	return 0;
}