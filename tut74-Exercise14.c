#include <stdio.h>
#include <math.h>

float ecludianDistance(int x1, int y1, int x2, int y2)
{
    int n1, n2, ans;
    n1 = x2 - x1;
    n2 = y2 - y1;
    ans = sqrt((n1 * n1) + (n2 * n2));
    return ans;
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dist;

    printf("Enter the value of x1: \n");
    scanf("%d", &x1);
    printf("Enter the value of y1: \n");
    scanf("%d", &y1);
    printf("Enter the value of x2: \n");
    scanf("%d", &x2);
    printf("Enter the value of y2: \n");
    scanf("%d", &y2);

    dist = areaOfCircle(x1, y1, x2, y2, ecludianDistance);
    printf("The distance is: %.2f\n", dist);

    return 0;
}