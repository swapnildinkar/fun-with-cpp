#include<iostream>

using namespace std;

int main()
{
	char a[20] = "a b c d       ";
	char b[20];
	char *p = a;
	char *q;
	char *t = a;
	int len = 10;
	while(*p)
	{
		if(*p!=' ')
			q = p;
		p++;
	}
	p--;

	while(q!=t)
	{
		if(*q == ' ')
		{
			*p-- = '0';
			*p-- = '2';
			*p-- = '%';
		}
		else
		{
			*p-- = *q;
		}
		q--;
		
	}
	*p = *q;
	
	for(int i = 0;i<20;i++)
	{	cout<<*p;
		p++;
	}

	return 0;
}