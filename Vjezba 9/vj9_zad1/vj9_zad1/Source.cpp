#include<iostream>

using namespace std;

template<typename T> bool manje(T a, T b) {
	return a < b;
}

template <typename T> void sort(T arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (manje(arr[j], arr[i]))
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template <> bool manje(const char a, const char b) {
	return tolower(a) < tolower(b);
}

int main() {
	int int_array[5] = {3,4,1,5,6};
	float float_array[5] = {3, 1.2, 4.2, 2, 1.1};
	char char_array[5] = {'r','f','a','C','a'};
	sort(int_array, 5);
	sort(float_array, 5);
	sort(char_array, 5);
	cout << "Sortirano :" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << int_array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << float_array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << char_array[i] << " ";
	}
	return 0;
}