#include <iostream>
using namespace std;

int main() {

         string s1;
         int i;
         cin>>s1;

         int len = s1.size();

         for(i=0;i<len; i++){


         if(i==0){
         	s1[i]=toupper(s1[i]);

         }


         }
         cout<<s1;
	return 0;
}
