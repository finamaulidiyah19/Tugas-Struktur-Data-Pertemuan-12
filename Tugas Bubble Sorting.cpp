#include <iostream>
int batas, data[100000];

void urutData()
{
	for (int x = 1; x < batas - 1; x++)
	{
		for (int y = batas - 1; y >= x; y--)
		{
			if (data[y - 1] > data[y])
			{
				int simpan = data[y - 1];
				data[y - 1] = data[y];
				data[y] = simpan;
			}
		}
	}
}

void tampilData()
{
	for (int x = 0; x < batas; x++)
	{
		std::cout << "Data Ke-" << x + 1 << ": " << data[x] << "\n";
	}
}

void keluarProgram()
{
	system("cls");
	std::cout << "Anda Keluar Program\n\n";
	system("pause");
}

void salahMemasukkan()
{
	system("cls");
	std::cout << "Anda Salah Memasukkan\n\n";
	system("pause");
}

void hapusDanReset()
{
	std::cout << "\n\n";
	system("pause");
	system("cls");
}

int main()
{
	do
	{
		unsigned short int pilihan;
		std::cout << "Urut Data Ascending";
		hapusDanReset();
		std::cout << "Apakah Anda Ingin Melanjutkan?\n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				system("cls");
				std::cout << "Masukkan Batas: ";
				std::cin >> batas;
				system("cls");
				for (int x = 0; x < batas; x++)
				{
					std::cout << "Masukkan Data Ke-" << x + 1 << " : ";
					std::cin >> data[x];
				}
				system("cls");
				do
				{
					std::cout << "Pengoperasian Program\n1. Tampil Data\n2. Urut Data\n3. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							system("cls");
							tampilData();
							hapusDanReset();
							break;
						case 2:
							system("cls");
							urutData();
							std::cout << "Data sudah diurutkan";
							hapusDanReset();
							break;
						case 3:
							keluarProgram();
							return 0;
							break;
						default:
							salahMemasukkan();
							return 0;
							break;
					}
				}
				while (true);
				break;
			case 2:
				keluarProgram();
				return 0;
				break;
			default:
				salahMemasukkan();
				return 0;
				break;
		}
	}
	while (true);
}
