#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long sum=0;
	long long g=0;
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}
	long long un,h=0;
	char zm;
	string z;
	for(int  i=0;i<n;i++){
		cin>>un>>zm;
		for(int j=0;j<un;j++){
			z[h]=zm;
			h++;
		}
		g+=un;
	}
	for(int  i=0;i<g;i++){
		int  b=z[i];
		int c=z[g-1];
		if(b==c){
			g--;
		}
		else if(c!=0){
			sum++;
			g--;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
