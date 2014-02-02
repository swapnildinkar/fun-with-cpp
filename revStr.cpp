#include<stdio.h>
#include<iostream>

using namespace std;


int main()
{
	char ss[100]="string";
	char* s = ss;
	char* t = s;
	char temp;

	while(*t)
	{
		//cout<<*t;
		t++;
	}
	t--;
	cout << *t <<"\n";
	cout << *s <<"\n";
	//cout << t <<"\n";
	//cout << s <<"\n";
	while(s<t)
	{
		temp = *s;
		*s++ = *t;
		*t-- = temp;
		//cout << *s;
	}
	cout << t <<"\n";
	cout << ss <<"\n";
	return 0;
}