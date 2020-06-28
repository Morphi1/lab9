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
int max_search(int** p, int n)
{
	int max;
	max = p[n - 1][n - 1];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i > j)
				if (p[i][j] > max)
					max = p[i][j];
	return max;
}
int main()
{
	setlocale(LC_ALL, "");
	int** p, i, j, n, count;
	cout << "������ N x N. ������� N: ";
	cin >> n;
	cout << endl;
	p = new int* [n];
	for (i = 0;i < n;i++)
		p[i] = new int[n];
	input(p, n);
	output(p, n);
	cout << endl;
	return 0;
