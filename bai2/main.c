#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int tong=0;
    int mang[n];
    for (int i=0;i<n;i++){
        scanf("%d",&mang[i]);
    }
    for (int i=1;i<n;i+=2){
        tong+=mang[i];
    }
    printf("%d",tong);
    return 0;
}
