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

	int ans = 0;
	int judge=0;

	if (sum == val1)ans++;
	if (sum == val2)ans++;
	if (sum == val3)ans++;
	if (sum==(val1+val2))ans++;
	if (sum ==( val1 +val3))ans++;
	if (sum == (val2 +val3))ans++;
	if (sum == (val1 +(val2 +val3)))ans++;




	// やること：val1～val3の和がsumになる数字の組み合わせの数を計算します
	return ans;


}
