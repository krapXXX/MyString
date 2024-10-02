#pragma once
class MyString
{
	char* str; 
	int length;
	static int count;
public:
	static int GetCount();    
	MyString();
	MyString(const char* str);
	MyString(const MyString& str);
	MyString(MyString&& obj);
	MyString& operator= (MyString&& obj);
	void Input();    
	void Output();
	void MyStrcpy(MyString& obj);    
	bool MyStrStr(const char* str);
	int  MyChr(char c);    
	int MyStrLen();
	void MyStrCat(MyString& obj);    
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);   

	MyString& operator=(const MyString& obj);
	MyString& operator= (MyString&& obj);

	char operator[] (int index);
	void operator() ();

	~MyString();
};