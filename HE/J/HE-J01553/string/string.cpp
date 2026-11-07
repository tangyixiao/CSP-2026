#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i=0,ans=0;
	string c[100001];
	cin>>n;
	while(n--){
		string w;
		int a;
		cin>>a>>w;
		while(a--){
			c[i]=w;
			++i;
		}
	}
	int j1=i,j2=0,j4=0;
	string cj[100001];
	i/=2;
	while(j1--){
		cj[j2]=c[j1];
		++j2;
	}
	while(i--){
		if(cj[j4]!=c[j4]){
		c[j4]=cj[j4];
		++ans;
		}
		++j4;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
