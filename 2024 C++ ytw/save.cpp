//-------------------------------------------------------
//save.h - �� �б� ���Ǹ� ������ �� �ִ� ���
//												2024.9.5
//-------------------------------------------------------

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>

void save(const std::string& inFileName)
{
	// ���޵� ���� inFileName�� �б� ���� ����
	std::ifstream in{ inFileName };
	if (not in) {
		std::cout << inFileName << "������ �� �� �����ϴ�" << '\n';
		exit(0);
	}
	// ������ ������ ���� �д�
	std::ofstream out{ "2024 2 C++ ��78��45.txt", std::ios::app };

	// ������ �ð��� ���Ͽ� ����Ѵ�
	auto now = std::chrono::system_clock::now();
	using namespace std::literals;
	now += 9h;

	out << '\n' << '\n';
	out << "========================================" << '\n';
	out << "����ð� - " << now << '\n';
	out << "========================================" << '\n';
	out << '\n';

	// ������ ������ ���� ������ �д´�
	char c;
	in >> std::noskipws;
	while (in >> c) {
		out << c;		// ���� ���ڸ� ������ ���Ͽ� �����Ѵ�
	}


}