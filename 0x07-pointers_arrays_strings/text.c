#include <stdio.h>
int solution(int A[], int N) {
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		if (A[i] % 4 == 0)
			result += A[i];
	}
	return result;
}
int main() {
	int nums [16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	printf("%d", solution(nums, 16)); //4 + 8 + 12 + 16 = 40
	return 0;
}
}
//
