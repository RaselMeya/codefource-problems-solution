#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
	string name;
	char c;
	cin >> name;
	set<char> s;
	for (int i = 0; i < name.size(); i++)
	{
		c = name[i];
		s.insert(c);

	}

	int l = s.size();
	(l % 2 == 0) ? cout << "CHAT WITH HER!\n": cout << "IGNORE HIM!\n";

}