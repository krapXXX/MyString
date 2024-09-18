#pragma once
class MyString
{
	char* str; 
	int lenght;
	static int count;
public:
	static int GetCount();    
	MyString();
	MyString(const char* str, int size); 
	MyString(const char* str);
	MyString(const MyString& str);
	void Input();    
	void Output();
	void MyStrcpy(MyString& obj);    
	bool MyStrStr(const char* str);
	int  MyChr(char c);    
	int MyStrLen();
	void MyStrCat(MyString& obj);    
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);    
	~MyString();
};