#include "LinkedList/LinkedList.h"

int main()
{
	LinkedList<int> list;
	for (int ix = 0; ix < 10; ++ix)
	{
		list.InsertLast((ix + 1) * 10);
	}
	std::cout << "리스트 추가후 출력\n";

	//항목 제거
	list.Delete(20);
	std::cout << "리스트에서 20 제거 후 출력\n";
	list.Print();
	
	//list.InsertMiddle(20);
	std::cout << "리스트 다시 추가후 출력\n";
	list.Print();

	std::cin.get();
}