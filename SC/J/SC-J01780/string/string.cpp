#include<bits/stdc++.h>
using namespace std;
string c,tmp="";
long long n,a,step; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--){
			tmp+=c;
		}
	}
	int l=tmp.size();
	for(int i=0;i<l/2;i++){
		if(tmp[i]!=tmp[l-1]){
			step++;
		}
	}
	cout<<step;
	return 0;
} 