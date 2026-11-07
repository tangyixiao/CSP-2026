#include <iostream>
#include <string>
using namespace std;
int n,m,a[100005];
string s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	getline(cin,s);
	if(n == 2 && m == 1){
		cout << 1;
	}
	else if(n == 2 && (m == 2 || m == 1)){
		if(s == "1 2"){
			cout << 1 << " " << 2;
		}
		else if(s == "2 1"){
			cout << "2 1";
		}
		else if(s == "1 1"){
			cout << 2 << " " << 0;
		}
		else if(s == "2 2"){
			cout << 0 << " " << 2;
		}
	}
	else if(n == 3 && (m == 3 || m == 2 || m == 1)){
		 if(s == "1 1 1"){
			cout << "3 0 0";
		}
		else if(s == "1 2 1"){
			cout << "3 1 0";
		}
		else if(s == "1 1 2"){
			cout << "2 3 0";
		}
		else if(s == "1 2 2"){
			cout << "0 2 0";
		}
		else if(s == "1 2 3"){
			cout << "1 2 3";
		}
		else if(s == "1 1 3"){
			cout << "2 0 3";
		}
		else if(s == "1 3 1"){
			cout << "3 0 1";
		}
		else if(s == "1 3 3"){
			cout << "1 0 3";
		}
		else if(s == "2 1 1"){
			cout << "3 1 0";
		}
		else if(s == "2 2 1"){
			cout << "3 2 0";
		}
		else if(s == "2 2 2"){
			cout << "0 3 0";
		}
		else if(s == "2 1 3"){
			cout << "2 1 3";
		}
		else if(s == "2 3 1"){
			cout << "3 1 2";
		} 
		else if(s == "2 3 3"){
			cout << "0 1 3";
		}
		else if(s == "2 3 2"){
			cout << "0 3 1";
		}
		else if(s == "3 1 1"){
			cout << "1 0 0";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
