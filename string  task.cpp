#include <iostream>
using namespace std;

int main() {

		string s;
		int i;
		cin>>s;
		int len=s.size();

		for(i=0;i<len;i++){
			s[i]=tolower(s[i]);

		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
			continue;
		}
		cout<<"."<<s[i];

		}
	return 0;
}
