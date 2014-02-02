#include<iostream>
using namespace std;
int chk(char *a, char *b)
{
	int array[256];
	for(int k = 0;k < 256;k++)
			array[k]=0;
	while(*a)
	{
		array[(*a)]+=1;
		a++;
		
	}
	for(int k = 0;k < 256;k++)
			cout << array[k];
	while(*b)
	{
		if(array[*b] > 0)
		{
			array[*b]--;
		}
		else
		{
			return 0;
		}
		b++;
	}
	return 1;
}
int main()
{
	if(chk("god","dog"))
		cout << "\n"<< "The strings are permutations of each other.";
	else
		cout << "\n"<< "The strings are not permutations of each other.";
	return 0;

}