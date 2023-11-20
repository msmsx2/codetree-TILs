#include <stdio.h>

int main() {
    char arr[5][3];
   

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%c ", &arr[i][j]);   
        }           //일단 [5][3]을 소문자로 다 받는걸 먼저해
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] += 'A' - 'a';
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}