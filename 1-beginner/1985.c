#include <stdio.h>
enum Menu
{
    ITEM_1001 = 1001,
    ITEM_1002 = 1002,
    ITEM_1003 = 1003,
    ITEM_1004 = 1004,
    ITEM_1005 = 1005
};

float purchaseProductOfMenu(int tag, int quantity)
{

    double solve = 0;
    if (tag == 1001)
    {
        solve = quantity * 1.50;
    }
    else if (tag == 1002)
    {
        solve = quantity * 2.50;
    }
    else if (tag == 1003)
    {
        solve = quantity * 3.50;
    }
    else if (tag == 1004)
    {
        solve = quantity * 4.50;
    }
    else if (tag == 1005)
    {
        solve = quantity * 5.50;
    }
    return solve;
}

int main()
{
    int n;
    scanf("%d", &n);
    float result;
    for (int i = 0; i < n; i++)
    {
        int tg;
        int qty;
        scanf("%d %d", &tg, &qty);
        result += purchaseProductOfMenu(tg, qty);
    }
    printf("%.2f\n", result);

    return 0;
}
