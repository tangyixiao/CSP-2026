#include <bits/stdc++.h>
using namespace std;
bool rev(string y){
	int s=y.length();
	int w=0;
	for(int i=1;i<=s;i++){
		if(y[i-1]!=y[s-i])	{
			w++;
		}
	}
	if(w==0)	return true;
	else	return false;
	
}

int main(){

    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,a,c=0;
    char b;
    string y;
    cin>>n;
	for(int i=1;i<=n;i++){
        cin>>a>>b;
        c+=a; 
	   for(int j=1;j<=a;j++){
        	y+=b;
		}
    	
	}
	if(rev(y))	cout<<0;
	else	cout<<c/2;
    return 0;
	}
