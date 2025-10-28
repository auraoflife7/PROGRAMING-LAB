#include <stdio.h>
int main()
{
    int totalCookies, cookiesPerBox, boxesPerContainer;
    int boxes, containers;
    printf("Enter total number of cookies: ");
    scanf("%d", &totalCookies);
    printf("Enter number of cookies in one box: ");
    scanf("%d", &cookiesPerBox);
    printf("Enter number of boxes in one container: ");
    scanf("%d", &boxesPerContainer);
    boxes = totalCookies / cookiesPerBox;
    if (totalCookies % cookiesPerBox != 0)
        boxes++;
    containers = boxes / boxesPerContainer;
    if (boxes % boxesPerContainer != 0)
        containers++;
    printf("\nNumber of boxes required: %d\n", boxes);
    printf("Number of containers required: %d\n", containers);
    return 0;
}