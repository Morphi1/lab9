#include <fstream> 
#include <iostream> 
#include <locale.h> 
#include <stdlib.h>
#include <locale.h>
using namespace std;
void output(int** p, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << p[i][j] << " ";
	};
}
void input(int** p, int n)
{
	cout << "���� �������" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];
}
int main()
{
	setlocale(LC_ALL, "");

	return 0;