#include "Container/Tree.h"

int main()
{
	Tree<int> tree(10);
	tree.AddChild(10, 9);
	tree.AddChild(10, 8);
	tree.AddChild(9, 7);
	tree.AddChild(9, 6);

	//검색 테스트
	Node<int>* outNode = nullptr;
	if (tree.Find(6, outNode))
	{
		int num2 = 30;
	}

	//삭제 테스트
	if (tree.Remove(9))
	{
		int num3 = 30;
	}
	
	//전위 순회 테스트
	tree.PreorderTraversal();

	int number = 10;
}