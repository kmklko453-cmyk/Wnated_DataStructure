#include "Container/HashTable.h"
#include <iostream>

int main()
{
	// 해시 테이블 객체 생성
	HashTable table;

	//데이터 추가
	table.Add("Ronnie", "010-12345678");
	table.Add("Ronnie", "010-12354165");
	table.Add("Konnie", "010-67837562");
	table.Add("Uonnie", "010-22546252");
	table.Add("Bonnie", "010-13467711");
	table.Add("Connie", "010-12879364");

	//출력
	table.Print();

	//검색
	Pair<std::string, std::string> outValue;
	if (table.Find("Konnie", outValue))
	{
		std::cout << "검색 성공. key: " << outValue.key << " | Value: " << outValue.value << "\n";
	}

	//삭제
	table.Delete("Ronnie");
	table.Delete("Konnie");

	table.Print();


	std::cin.get();
}