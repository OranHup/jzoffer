#include <iostream>
#include <string>

using namespace std;

void swap(char* str, int a, int b)
{
	char temp = str[a];
	str[a] = str[b];
	str[b] = temp;
}


void permutation(char* str, int beg, int end)
{
	int k;
	if (beg == end - 1)
	{
            std::cout << str << std::endl;
	}
	else
	{
		for (k = beg; k < end; ++k)
		{
			swap(str, k, beg);
			permutation(str, beg + 1, end);
			swap(str, k, beg);
		}
	}
}

int main()
{
	char str[] = "abc";
	permutation(str, 0, 3);
	//str[1] = 'd';
	return 0;
}

