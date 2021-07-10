
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!";
	char arr2[] = "###############";
	int left = 0;
	int right = strlen(arr1)-1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		system("cls");//执行系统命令的函数  cls 清空桌面
		printf("%s\n", arr2);
		Sleep(1000);
	}
	return 0;
}