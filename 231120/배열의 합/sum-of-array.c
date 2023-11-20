#include <stdio.h>

int main() {
    int n = 4;
    int number;
    

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            scanf("%d ", &number);
            sum += number;
        }
        printf("%d\n", sum);
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}