#include <iostream>
#include <string>
using namespace std;
string a,b,c,d;
int c1,s1,c2,s2;
char x,y,z,k;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	for(int i = 0;i < a.size();i++){
		if(a[i] >= '0' && a[i] <= '9'){
			c1=c1*10+(a[i]-'0'); 
		}
		x = a[i];
	}
	for(int i = 0;i < b.size();i++){
		if(b[i] >= '0' && b[i] <= '9'){
			s1=s1*10+(b[i]-'0'); 
		}
		y=b[i];
	}
	for(int i = 0;i < c.size();i++){
		if(c[i] >= '0' && c[i] <= '9'){
			c2=c2*10+(c[i]-'0'); 
		}
		z=c[i];
	}
	for(int i = 0;i < d.size();i++){
		if(d[i] >= '0' && d[i] <= '9'){
			s2=s2*10+(d[i]-'0'); 
		}
		k=d[i];
	}
	if(c1 != c2){
		cout << "0000";
		return 0;
	} 
	if(c1 == c2){
		cout << 1; 
		if(s1 == s2){
			cout << 1;
			//bool flag=0,flag1=0;
			if(y <= 'C'){
				if(k <= 'C'){
					cout << 1;
					if((int)(k-y) == 1 || (int)(y-k) == 1){
						cout << 1;
					}
					else{
						cout << 0;
					}
				}
				else{
					cout << "00";
				}
			}
			if(y >= 'D'){
				if(k >= 'D'){
					cout << 1;
					if((int)(k-y) == 1 || (int)(y-k) == 1){
						cout << 1;
					}
					else{
						cout << 0;
					}
				}
				else{
					cout << "00";
				}
			}
		}
		else{
			cout << "000";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 
