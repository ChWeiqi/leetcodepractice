// twoSum.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
	int * returnValue = (int *)malloc(sizeof(int) * 2);
	int flag = 0, i = 0, j = 0;
	for (i = 0; i < numsSize; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if (j == numsSize)
				break;
			if (nums[i] + nums[j] == target)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			returnValue[0] = i;
			returnValue[1] = j;
			break;
		}
	}
	return returnValue;
}

int main()
{
	int a[4] = { 3,2,3 };
	int target = 6;
	int * num = twoSum(a, 3, target);
	printf("%d %d", num[0], num[1]);
    return 0;
}

