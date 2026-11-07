#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a,b;
	char c,d;
	cin>>n;
	if(n==1){
		cin>>a>>c;
		cout<<0;
	}
	if(n==2){
		cin>>a>>c>>b>>d;
		if(c==d){
			cout<<0;
		}
		else{
			if(b>=a){
				cout<<a;
			}
			else{
				cout<<b;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
