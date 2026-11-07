#include<iostream>
#include<cstring>
using namespace std;
long long w[1000000];
char s[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	int n,zs=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>w[i]>>s[i];
	}
	int r=0,l=n-1;
	while(r<l){
		if(s[r]-'a'!=s[l]-'a'){
			if(w[r]>w[l]){
				w[r]=w[r]-w[l];
				zs=zs+w[l];
				l--;
			}
			else if(w[r]<w[l]){
				w[l]=w[l]-w[r];
				zs=zs+w[r];
				r++;
			}else{
				zs=zs+w[l];
				r++;
				l--;
			}
		}else{
				if(w[r]>w[l]){
					w[r]=w[r]-w[l];
					l--;
				}
				else if(w[r]<w[l]){
					w[l]=w[l]-w[r];
					r++;
				}else{
					r++;
					l--;
				}
		}
	}
	cout<<zs;
	fclose(stdin);
	fclose(stdout);
	return 0;
}