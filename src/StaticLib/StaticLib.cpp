﻿#include <stdbool.h>

#include "../include/lib_func.h"

// 2つの数字が等しいですか？
bool is_same(int val1, int val2)
{
	// やること：この処理を数字を比較するように変更します
	if (val1 == val2)
	{
		return true;
	}
	return false;
}

// val1 から val3 の任意の組み合わせでsumになる組み合わせは何個ありますか？
int calc_combinations_3(int sum, int val1, int val2, int val3)
{
	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	int count = 0;
	if (sum == val1) {
		count++;
	}
	if (sum == val2) {
		count++;
	}
	if (sum == val3) {
		count++;
	}
	if (sum == val1 + val2) {
		count++;
	}
	if (sum == val1 + val3) {
		count++;
	}
	if (sum == val2 + val3) {
		count++;
	}
	if (sum == val1 + val2 + val3) {
		count++;
	}
	return count;
}
