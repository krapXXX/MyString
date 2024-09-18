
#include <iostream>   
#include "MyString.h" 
using namespace std;

int MyString::GetCount()//�������� ���'���
{
    return count;
}

MyString::MyString()
{
    str = nullptr;
    lenght = 0;
    count++;
}

MyString::MyString(const char* string, int size)
{
    str = new char[(size)+1];
    strcpy_s(str, (size)+1, string);
    cout << "80 symbols" << endl;
    count++;
}

MyString::MyString(const MyString& string)//����������� ���������
{
    str = new char[strlen(string.str) + 1];
    strcpy_s(str, strlen(string.str) + 1, string.str);
    lenght = string.lenght;
}

MyString::MyString(const char* string)
{
    str = new char[strlen(string) + 1];
    strcpy_s(str, strlen(string) + 1, string);
    count++;
}

void MyString::Input()
{
    char string[225];
    cout << "Enter text: ";
    cin.getline(string, 225);
    str = new char[strlen(string) + 1];
    strcpy_s(str, strlen(string) + 1, string);
}

void MyString::Output()
{
    cout << str;
}

void MyString::MyStrcpy(MyString& obj)//����������� �����   
{
    str = new char[strlen(obj.str) + 1];
    strcpy_s(str, strlen(obj.str) + 1, obj.str);
    lenght = obj.lenght;
}

bool MyString::MyStrStr(const char* string)//����� ��������� � ������   
{
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (string[i] == str[j])
            {
                return true;
                cout << "Found!";
                break;
            }
            else
            {
                return false;
                cout << "Not found";
            }

        }
    }
}

int MyString::MyChr(char c)//����� ������� � ������(������ ���������� �������, ���� -1)   
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            return i + 1;
        }
    }
}

int MyString::MyStrLen()//���������� ����� ������   
{
    return strlen(str);
}

void MyString::MyStrCat(MyString& obj)//����������� �����   
{
    str = new char[strlen(str) + strlen(obj.str) + 1];
    strcpy_s(str, strlen(obj.str) + 1, obj.str);
    for (int i = 0; i < strlen(obj.str); i++)
    {
        str[i] = obj.str[i];
    }
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = obj.str[i];
    }
    str[strlen(obj.str) + strlen(str)] = '\0';
}

void MyString::MyDelChr(char c)// ������� ��������� ������    
{

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            lenght--;
            str[i] = str[i + 1];
        }
    }
}

int MyString::MyStrCmp(MyString& obj)/*��������� �����
- 1 � ������ ������ ������ ��� ������
1 � ������ ������ ��� ������
0 � ������ �����!*/
{
    if (strlen(str) == strlen(obj.str))
    {
        return 0;
    }
    if (strlen(str) > strlen(obj.str))
    {
    return  -1;
    }
    if (strlen(str) < strlen(obj.str))
    {
        return 1;
    }
}

MyString::~MyString()
{
    delete[]str;
    lenght = 0;
    count--;
}