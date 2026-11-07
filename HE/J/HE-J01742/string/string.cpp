#include<bits/stdc++.h>
using namespace std;
struct qwe{
	long a;
	string b;
};
qwe x[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].b;
	}
	bool v=true;
	for(int i=1;i<=n-1;i++){
		if(x[i].b!=x[i+1].b){
			v=false;		
		}
	}
	if(v){
		cout<<0;
		return 0;
	}	
	if(n==2){
	   	if(x[1].b!=x[2].b){
	   		cout<<min(x[1].a,x[2].a);
	   		return 0;
		}
	} 
	cout<<3000000000;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
