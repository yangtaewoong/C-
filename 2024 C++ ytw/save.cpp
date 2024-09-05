//-------------------------------------------------------
//save.h - 한 학기 강의를 저장할 수 있는 기능
//												2024.9.5
//-------------------------------------------------------

#include <iostream>
#include <string>
#include <fstream>
#include <chrono>

void save(const std::string& inFileName)
{
	// 전달된 파일 inFileName을 읽기 모드로 연다
	std::ifstream in{ inFileName };
	if (not in) {
		std::cout << inFileName << "파일을 열 수 없습니다" << '\n';
		exit(0);
	}
	// 저장할 파일을 열어 둔다
	std::ofstream out{ "2024 2 C++ 월78목45.txt", std::ios::app };

	// 저장한 시간을 파일에 기록한다
	auto now = std::chrono::system_clock::now();
	using namespace std::literals;
	now += 9h;

	out << '\n' << '\n';
	out << "========================================" << '\n';
	out << "저장시간 - " << now << '\n';
	out << "========================================" << '\n';
	out << '\n';

	// 파일의 내용을 글자 단위로 읽는다
	char c;
	in >> std::noskipws;
	while (in >> c) {
		out << c;		// 읽은 글자를 저장할 파일에 저장한다
	}


}