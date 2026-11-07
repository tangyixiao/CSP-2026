#include<iostare>;
using namespace std;
string s;
int m;
int n;
int c;
string a[100][100];
main(){
	preopen("string.in","r",stdin);
	preopen("string.out","w",stdout);
	cin<<m;
	for(int i=0,i<m,i++){
		cin<<n<<s;
		for(int j=0;j<n;j++){
			a[i][j]=s;
		}
		c+=n;
	}
	c=(c+1)/2;
}
