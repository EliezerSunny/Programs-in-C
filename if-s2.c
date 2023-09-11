#include <stdio.h>

int main() {
    int x = printf("Enter value of x: ");
    scanf("%d", &x);
    int y = printf("Enter value of y: ");          scanf("%d", &y);

    if (x < y)
    {
	    printf("x is less than y.\n");
    } else 
    {
	    printf("x is not less than y.\n");
    }
    return 0;
}
