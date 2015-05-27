#include <iostream>
#include <string>
#include "Post.h"
using namespace std;

int main()
{
	Post obj1,obj2;
	cout << "Enter " << endl;
	cin >> obj1;
	cout << "Enter " << endl;
	cin >> obj2;
	obj1++;
	++obj2;

	cout << obj1 << endl;
	cout << obj2 << endl;
	system("pause");
	return 0;
}