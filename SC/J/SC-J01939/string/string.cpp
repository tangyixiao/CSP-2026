#include<iostream>
using namespace std;
int MAX=1e5+1;
int main(){
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
	long l[MAX],g,ans=0,a=0;
	string c[MAX],h[MAX];
	cin>>g;
	for(int i=0;i<g;i++){
		cin>>l[i]>>c[i];
		a=a+l[i];
		for(int j=0;j<=l[i];j++){
			h[i]=c[i];
		}
	}
	int mid=a/2-1;
	if(a/2==0)
	  mid=a/2;
	for(int i=mid;i<=a;i++){
		if(h[i]!=h[2*mid-i]){
           ans++;
        }
    }
    cout<<ans;
    reurtn 0;
}
