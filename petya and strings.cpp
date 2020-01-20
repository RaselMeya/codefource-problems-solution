#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{


    string s_1,s_2;
    int i;
    cin>>s_1;
    cin>>s_2;

    int l= s_1.size();

    transform(s_1.begin(), s_1.end(), s_1.begin(), ::tolower);
    transform(s_2.begin(), s_2.end(), s_2.begin(), ::tolower);

    if(s_1 == s_2)
    {
        cout<<"0"<<endl;
        return 0;
    }

    for(i=0; i<l; i++)
    {
        if(s_1[i]==s_2[i])
        {
            continue;
        }
        else
        {
            if(s_1[i] > s_2[i])
            {
                cout<<"1"<<endl;
                break;
            }
            else
                cout<<"-1"<<endl;
            break;
        }
    }

    return 0;
}
