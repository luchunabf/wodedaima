#define _CRT_SECURE_NO_WARNINGS 1


������ < stdio.h��>
������ < stdlib.h��>
������ < math.h��>





int  BinarySearch��int arr[]��int k��int left��int right��
{
	������ <= �ң�
	{
	int mid = left + ��right - left�� / 2;
	if��arr[mid]> k��
	{
	�� = ��1;
}
	���� �����arr[mid] <k��
	{
		�� = �� + 1;
	}
	����
	{
		�����м�;
	}
}
	���� - 1;
}
int  main����
{
	INT ARR[] = { 1��2��3��4��5��6��7��8��9��10 };
	int k = 17;
	int left = 0;
	int right = sizeof��arr�� / sizeof��arr[0]�� - 1;
	int ret = BinarySearch��arr��k��left��right��;
	if��ret == -1��
	{
		printf�����Ҳ���\ n ����;
	}
	����
	{
		printf�����ҵ��ˣ���d \ n ����ret��;
	}
	ϵͳ������ͣ����;
	���� 0;
}



//
// int main����
// {
// 	int arr [] = {1,2,3,4,5,6,7,8,9,10};
// 	int k = 7;
// 	int left = 0;
// 	int right = sizeof��arr��/ sizeof��arr [0]�� -  1;
//
// 	while����<=�ң�
// 	{
// 		int mid = left +��right-left��/ 2;
// 		if��arr [mid]> k��
// 		{
// 			right = mid-1;
// 		}
// 		���������arr [mid] <k��
// 		{
// 			left = mid + 1;
// 		}
// 		���
// 		{
// 			printf�����ҵ��ˣ��±��ǣ���d \ n����mid��;
// 			��Ϣ
// 		}
// 	}
// 	if����>�ң�
// 	{
// 		printf�����Ҳ���\ n����;
// 	}
// 	ϵͳ������ͣ����;
// 	����0;
// }

//����
//
// int main����
// {
// 	int ret = 1;
// 	int i = 0;
// 	int j = 0;
// 	int sum = 0;
// 	// 1 + 2 + 6 = 9
// 	for��j = 1; j <= 3; j ++��
// 	{
// 		ret = ret * j;
// 		sum = sum + ret;
// 	}
//
// 	printf������d \ n����sum��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int ret = 1;
// 	int i = 0;
// 	int j = 0;
// 	int sum = 0;
// 	// 1 + 2 + 6 = 9
// 	for��j = 1; j <= 3; j ++��
// 	{
// 		ret = 1;
// 		for��i = 1; i <= j; i ++��
// 		{
// 			ret = ret * i;
// 		}
// 		sum = sum + ret;
// 	}
//
// 	printf������d \ n����sum��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int n = 0;
// 	int ret = 1;
// 	int i = 0;
//
// 	scanf������d������n��;
// 	for��i = 1; i <= n; i ++��
// 	{
// 		ret = ret * i;
// 	}
// 	printf������d \ n����ret��;
// 	ϵͳ������ͣ����;
// 	����0;
// }


//
// int main����
// {
// 	int i = 0;
// 	int count = 0;
// 	for��i = 1; i <= 100; i ++��
// 	{
// 		if��i��10 == 9��
// 			count ++;
// 		if��i / 10 == 9��
// 			count ++;
// 	}
// 	printf����count =��d \ n����count��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int i = 0;
// 	double sum = 0;
// 	int flag = 1;
// 	for��i = 1; i <= 100; i ++��
// 	{
// 		sum + = flag * 1.0 / i;
// 		flag = -flag;
// 	}
// 	printf������lf \ n����sum��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int i = 0;
// 	double sum = 0;
// 	for��i = 1; i <= 100; i ++��
// 	{
// 		if��i��2 == 1��
// 			sum = sum + 1.0 / i;
// 		���
// 			sum = sum  -  1.0 / i;
// 	}
// 	printf������lf \ n����sum��;
// 	ϵͳ������ͣ����;
// 	����0;
// }
//
// int main����
// {
// 	int arr1 [] = {1,3,5,7,9};
// 	int arr2 [] = {2,4,6,8,0};
// 	int tmp = 0;
//
// 	int i = 0;
// 	int sz = sizeof��arr1��/ sizeof��arr1 [0]��;
// 	for��i = 0; i <sz; i ++��
// 	{
// 		tmp = arr1 [i];
// 		arr1 [i] = arr2 [i];
// 		arr2 [i] = tmp;
// 	}
// 	for��i = 0; i <sz; i ++��
// 	{
// 		printf������d����arr1 [i]��;
// 	}
// 	printf����\ n����;
// 	for��i = 0; i <sz; i ++��
// 	{
// 		printf������d����arr2 [i]��;
// 	}
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int m = 18;
// 	int n = 24;
// 	int tmp = 0;
//
// 	while��tmp = m��n��
// 	{
// 		m = n;
// 		n = tmp;
// 	}
// 	printf������d \ n����n��;
// 	ϵͳ������ͣ����;
// 	����0;
// }



//��ʵ�δ����βε�ʱ��
//�β���ʵ�ε�һ����ʱ����

//�β�
// void Swap��int x��int y��
// {
// 	int tmp = x;
// 	x = y;
// 	y = tmp;
// }
//
// void Swap��int * px��int * py��
// {
// 	int tmp = * px;
// 	* px = * py;
// 	* py = tmp;
// }
//
// int main����
// {
// 	int a = 2;
// 	int b = 1;
// 	int c = 3;
// 	if��a <b��
// 	{
// 		��������a����b��;
// 	}
// 	if��a <c��
// 	{
// 		��������a����c��; //�ϵ�
// 		// a��c��ʵ��
// 	}
// 	if��b <c��
// 	{
// 		��������b����c��;		
// 	}
// 	printf������d��d��d \ n����a��b��c��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int a = 10;
// 	int * p =��a;
//
// 	* p = 20;
// 	printf������d \ n����a��;
// 	ϵͳ������ͣ����;
// 	����0;
// }
//
// int main����
// {
// 	int arr [10] = {-1��-2��-3��-4��-5��-6��-7��-8��-9��-10};
// 	int max = arr [0];
// 	int i = 0;
// 	for��i = 1; i <10; i ++��
// 	{
// 		if��arr [i]> max��
// 		{
// 			max = arr [i];
// 		}
// 	}
// 	printf����max =��d \ n����max��;
// 	ϵͳ������ͣ����;
// 	����0;
// }
// //
// int main����
// {
// 	int a = 10;
// 	int b = 20;
// 	// 01010-b
// 	// 10100-a
// 	// 11110
// 	printf����a =��db =��d \ n����a��b��;
// 	/ * a = a + b;
// 	b = ab;
// 	a = ab; * /
// 	//��λ���
// 	a = a ^ b;
// 	b = a ^ b;
// 	a = a ^ b;
//
// 	printf����a =��db =��d \ n����a��b��;
// 	ϵͳ������ͣ����;
// 	����0;
// }



//
// int main����
// {
// 	int a = 10;
// 	int b = 20;
//
// 	int tmp = 0;
// 	printf����a =��db =��d \ n����a��b��;
// 	tmp = a;
// 	a = b;
// 	b = tmp;
// 	printf����a =��db =��d \ n����a��b��;
// 	ϵͳ������ͣ����;
// 	����0;
// }


//
// int main����
// {
// 	int year = 0;
// 	for����= 1000;��<= 2000;��++��
// 	{
// 		if�������꣥4 == 0��&&���꣥100��= 0����||���꣥400 == 0����
// 		{
// 			printf������d������ݣ�;
// 		}
// 	}
// 	ϵͳ������ͣ����;
// 	����0;
// }
//

//
// int main����
// {
// 	int year = 0;
// 	for����= 1000;��<= 2000;��++��
// 	{
// 		if���꣥4 == 0��
// 		{
// 			if���꣥100��= 0��
// 			{
// 				printf������d������ݣ�;
// 			}
// 		}
// 		if���꣥400 == 0��
// 		{
// 			printf������d������ݣ�;
// 		}
// 	}
// 	ϵͳ������ͣ����;
// 	����0;
// }


// 1 * 1 = 1
// 2 * 1 = 2 2 * 2 = 4
// 3 * 1 = 3 3 * 2 = 6 3 * 3 = 9
// ....
// 9 * 9
//
// int main����
// {
// 	int i = 0;
// 	for��i = 1; i <= 9; i ++��
// 	{
// 		//���ƴ�ӡһ��
// 		int j = 0;
// 		for��j = 1; j <= i; j ++��
// 		{
// 			printf������d *��d =�� -  2d����i��j��i * j��;
// 		}
// 		printf����\ n����;
// 	}
// 	ϵͳ������ͣ����;
// 	����0;
// }

//���� -  leetcode
//ţ���� -
//ÿ��һ��

//
// int main����
// {
// 	int i = 0;
// 	int count = 0;
// 	for��i = 101; i <= 200; i + = 2��
// 	{
// 		int j = 0;
// 		for��j = 2; j <= sqrt��i��; j ++��
// 		{
// 			if��i��j == 0��
// 				��Ϣ
// 		}
// 		if��j> sqrt��i����
// 		{
// 			printf������d����i��;
// 			count ++;
// 		}
// 	}
// 	printf����\ ncount =��d \ n����count��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int i = 0;
// 	int count = 0;
// 	for��i = 100; i <= 200; i ++��
// 	{
// 		int j = 0;
// 		for��j = 2; j <= sqrt��i��; j ++��
// 		{
// 			if��i��j == 0��
// 				��Ϣ
// 		}
// 		if��j> sqrt��i����
// 		{
// 			printf������d����i��;
// 			count ++;
// 		}
// 	}
// 	printf����\ ncount =��d \ n����count��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int i = 0;
// 	int count = 0;
// 	for��i = 100; i <= 200; i ++��
// 	{
// 		int j = 0;
// 		for��j = 2; j <= i / 2; j ++��
// 		{
// 			if��i��j == 0��
// 				��Ϣ
// 		}
// 		if��j>��i / 2����
// 		{
// 			printf������d����i��;
// 			count ++;
// 		}
// 	}
// 	printf����\ ncount =��d \ n����count��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

//
// int main����
// {
// 	int i = 0;
// 	int count = 0;
// 	for��i = 100; i <= 200; i ++��
// 	{
// 		// printf������d����i��;
// 		//�ж����Ƿ�Ϊ����
// 		// 2- i-1
// 		int j = 0;
// 		for��j = 2; j <= i-1; j ++��
// 		{
// 			if��i��j == 0��
// 				��Ϣ
// 		}
// 		// 2
// 		if��i == j��
// 		{
// 			printf������d����i��;
// 			count ++;
// 		}
// 	}
// 	printf����\ ncount =��d \ n����count��;
// 	ϵͳ������ͣ����;
// 	����0;
// }

