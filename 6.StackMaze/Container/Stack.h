#pragma once

//스택 자료구조 클래스
template<typename T, int capacity = 10>
class Stack
{
public:
	//생성자
	Stack()
		:top(0)
	{
	}

	// 추가 함수
	bool Push(const T& value)
	{
		//스택이 가득찼다면 실패
		if (IsFull())
		{
			return false;
		}

		//저장 처리
		data[top] = value;
		++top;
		//data[top++] = value; 이것도 가능 

		return true;
	}

	// 삭제 함수
	// 고민 해볼 사항
	// 1. 반환 값을 성공/실패 여부로 할지
	// 2. 반환 값을 스택의 값으로 할지

	//1번으로 구현
	bool Pop(T& outValue)
	{
		// 스택이 빈 경우에는 추출 실패
		if (IsEmpty())
		{
			return false;
		}

		// 값 추출 처리
		--top;
		outValue = data[top];
		return true;
	}

	//Getter
	inline int Count() const { return top; }

	// 스택이 비었는지 확인
	inline bool IsEmpty() const { return top == 0; }

	//스택이 가득찼는지 확인
	inline bool IsFull() const { return top >= capacity; }


private:
	//스택을 비우는 함수
	void Clear()
	{
		top = 0;
	}

private:
	//정적 배열로 데이터 관리
	T data[capacity] = {};

	//스택 상단을 가리키는 위치 값
	int top = 0;

};