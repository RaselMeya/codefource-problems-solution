#include <iostream>
using namespace std;

int main() {

         string s1;

         cin>>s1;

         int len = s1.size();

          if(len<7)
  cout<<"NO";
  else
  {
  	if(s1.find("1111111")!=string::npos||s1.find("0000000")!=string::npos)
  	cout<<"YES";
  	else
  	cout<<"NO";
  }


	return 0;
}
