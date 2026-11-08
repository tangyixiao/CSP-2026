#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("treavel.in","r",stdin);
	freopen("treavel.out","w",stdout);
	string c1,s1,c2,s2;
	if(cin>>c1>>s1>>c2>>s2);
{

		int ans1=(c1==c2) ? 1:0;
		int ans2=(ans1 && (s1.substr(0,2)==s2.substr(0.2))) ? 1:0;
		bool isLeft1=(s1[2]=='A' ||s1[2]=='B'||s1[2]=='c');
		bool isLeft2=(s2[2]=='A' ||s2[2]=='B'||s2[2]=='c');
		int ans3=(ans2 && (isLeft1 == isLeft2)) ? 1:0;
			int ans4 =0 ;
			if (ans3){
				string pair= s1.substr(2,1)+s2.substr(2,1);
					if (pair == "AB" || pair == "BA"||pair == "BC"||pair=="FD"){
						ans4=1;
						
					}
				
			}		 
		 cout<<ans1<<ans2<<ans3<<ans4<<endl;
	}
	return 0;
}
