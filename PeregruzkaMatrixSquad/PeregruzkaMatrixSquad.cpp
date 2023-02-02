#include <iostream>

using namespace std;

void CreateMassive(int arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			arr[r][c] = rand() % 1000;
		}
	}
}

void CreateMassive(double arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			arr[r][c] = double(rand() % 10);
		}
	}
}

void CreateMassive(char arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			arr[r][c] = char(rand() % 255);
		}
	}
}

void PrintMassive(int arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}
}

void PrintMassive(double arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}
}

void PrintMassive(char arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}
}

void MinMaxDiagonalMassive(int arr[][7], int size)
{
	int max = arr[0][0];
	int min = arr[0][0];
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			if (r == c)
			{
				if (max > arr[r][c])
					max = arr[r][c];
				if (min < arr[r][c])
					min = arr[r][c];
			}
		}
	}
	cout << "Максимум на главной диагонали: " << max << endl;
	cout << "Минимум на главной диагонали: " << min << endl;
}

void MinMaxDiagonalMassive(double arr[][7], int size)
{
	double max = arr[0][0];
	double min = arr[0][0];
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			if (r == c)
			{
				if (max > arr[r][c])
					max = arr[r][c];
				if (min < arr[r][c])
					min = arr[r][c];
			}
		}
	}
	cout << "Максимум на главной диагонали: " << max << endl;
	cout << "Минимум на главной диагонали: " << min << endl;
}

void MinMaxDiagonalMassive(char arr[][7], int size)
{
	char max = arr[0][0];
	double min = arr[0][0];
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			if (r == c)
			{
				if (max > arr[r][c])
					max = arr[r][c];
				if (min < arr[r][c])
					min = arr[r][c];
			}
		}
	}
	cout << "Максимум на главной диагонали: " << max << endl;
	cout << "Минимум на главной диагонали: " << min << endl;
}
void SortInRow(int arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			for (int i = 0; i < size - 1; i++)
			{
				int left = i;
				int right = i + 1;
				if (arr[r][left] > arr[r][right])
				{
					swap(arr[r][left], arr[r][right]);
				}
			}
		}
	}
}

void SortInRow(double arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			for (int i = 0; i < size - 1; i++)
			{
				int left = i;
				int right = i + 1;
				if (arr[r][left] > arr[r][right])
				{
					swap(arr[r][left], arr[r][right]);
				}
			}
		}
	}
}

void SortInRow(char arr[][7], int size)
{
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < size; c++)
		{
			for (int i = 0; i < size - 1; i++)
			{
				int left = i;
				int right = i + 1;
				if (arr[r][left] > arr[r][right])
				{
					swap(arr[r][left], arr[r][right]);
				}
			}
		}
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	int const size = 7;
	int arr[size][size]{};

	CreateMassive(arr, size);
	PrintMassive(arr, size);

	MinMaxDiagonalMassive(arr, size);

	cout << endl;

	SortInRow(arr, size);
	PrintMassive(arr, size);

	return 0;
}