#include <bits/stdc++.h>
using namespace std;

const int N=1010;
int a[N];
char b[N];
char f[N][N];

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	int m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		for(int j=0;j<a[i];j++){
			s+=b[i];
		}
	}
	//cout<<s;
	if(n==1){
		cout<<"0"<<endl;
	}
	string y="";
	for(int i=s.size()-1;i>=0;i--){
		y+=s[i];
	}
	if(y==s){
		cout<<"0"<<endl;
	}
	else{
		for(int i=0;i<s.size();i++){
			for(int j=0;j<s.size();j++){
				f[i][j]=min(f[i][j-1],f[i-1][j]);
				m++;
				break;
				if(f[i][j]==f[i-1][j-1]){
					f[i][j]=min(f[i][j],f[i-1][j-1]);
					m++;
					break;
				} 
//				else{
//					f[i][j]=min(f[i][j],f[i-1][j-1]);
//					m++;
//				}
			}
		}
		cout<<m<<endl;
	}
		
	return 0;
}
