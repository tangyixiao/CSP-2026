#include<bits/stdc++.h>
using namespace std;
struct nb{
	int a;
	string zm;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string,out","w",stdout);
	int n,h;
	cin>>n;
	nb b[200005];
	for(int i=0;i<n;i++) cin>>b[i].a >>b[i].zm ;
	for(int i=0;i<n-1;i++) if(b[i].zm !=b[i+1].zm ) h++;
	if(h==0){
		cout<<0;
		return 0;
	}
	h=0;
}