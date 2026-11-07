#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string b;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=i;j<=a;j++){
			b[j]=c;
		}
	}
	long long x=0,y=b.size()-1,ans=0;
	for(int i=0;i<b.size()-1;i++){
		if(b[x]=b[y]){
			x++;
			y--;
		}
		else{
			x++;
			y--;
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
