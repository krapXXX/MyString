#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString str1("I love world");
	MyString str2("I love worldddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd", 80);
	MyString str3 = str1;
	MyString str4;
	str4.Input();
	//str1.MyStrCat(str4);
	str1.Output();
	str2.Output();
	str3.Output();
	str4.Output();

}