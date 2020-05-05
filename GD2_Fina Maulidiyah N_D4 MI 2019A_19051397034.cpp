#include <iostream>
int batas, data[100000], acak[100000];

void insertion()
{
	for (int x = 0; x < batas; x++)
	{
		for (int y = x + 1; y < batas; y++)
		{
			if (data[y] < data[x])
			{
				int sementara = data[y];
				data[y] = data[x];
				data[x] = sementara;
			}
		}
	}
}

void selection()
{
	for (int x = 1; x < batas; x++)
	{
		int y = data[x];
		int z = x - 1;
		while (y < data[z])
		{
			data[z + 1] = data[z];
			z--;
			data[z + 1] = y;
		}
	}
}

void bubble()
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

void acakLagi()
{
	for (int x = 0; x < batas; x++)
	{
		data[x] = acak[x];
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
		std::cout << "Urut Data Descending";
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
					acak[x] = data[x];
				}
				system("cls");
				do
				{
					std::cout << "Pengoperasian Program\n1. Tampil Data\n2. Urut Data Secara Insertion\n3. Uruta Data Secara Selection\n4. Urut Data Secara Bubble\n5. Acak Data\n6. Keluar Program\n\nPilihan: ";
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
							insertion();
							std::cout << "Data sudah diurutkan secara Insertion";
							hapusDanReset();
							break;
						case 3:
							system("cls");
							selection();
							std::cout << "Data sudah diurutkan secara Selection";
							hapusDanReset();
							break;
						case 4:
							system("cls");
							bubble();
							std::cout << "Data sudah diurutkan secara Bubble";
							hapusDanReset();
							break;
						case 5:
							system("cls");
							acakLagi();
							std::cout << "Data sudah diacak";
							hapusDanReset();
							break;
						case 6:
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
