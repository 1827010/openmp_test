// 課題 : forループを並列化してください。
//

#include "stdafx.h"
#include <stdlib.h>
#include <omp.h>

int main()
{
	int i;
#pragma omp parallel for
	for (i = 0; i < 100; i++) {
		printf("%d\n", i);
	}
	system("pause"); // すぐには閉じないようにする

	return 0;
}