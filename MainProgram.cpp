#include <stdio.h>
#include <algorithm>
#include <conio.h>

using namespace std;

struct BiodataKaryawan
{
	int ID;
	int Tinggi;
} Input[3];

bool Banding(const BiodataKaryawan& X, const BiodataKaryawan& Y) {
	return X.Tinggi < Y.Tinggi;
}

int main() {
	Input[0].ID = 6647;
	Input[0].Tinggi = 160;
	Input[1].ID = 6648;
	Input[1].Tinggi = 153;
	Input[2].ID = 6649;
	Input[2].Tinggi = 164;

	sort(Input, Input + 3, Banding);

	for (int i = 0;  i < 3;  i++)
	{
		printf("%d ", Input[i].ID);
	}

	puts("");

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", Input[i].Tinggi);
	}

	_getch();
	return 0;
}
