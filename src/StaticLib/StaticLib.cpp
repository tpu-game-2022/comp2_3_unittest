#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	// やること：この処理を数字を比較するように変更します

	return val1 == val2;
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	int count[7] = { val1, val2, val3, val1 + val2, val1 + val3, val2 + val3, val1 + val2 + val3 };
	int flag = 0;
	for (int i = 0; i < 7; i++) {
		if (sum == count[i]) { flag++; }
	}

	return flag;
}
