#include <stdio.h>
#include "./printarray.h"


int main()
{
    int arr[] = {45, 235, 658, 4, 57};
    int len = sizeof(arr)/sizeof(int);
    int num;
    printf("--NUMBER FINDER-- \n");
    printf("TYPE YOUR NUMBER: \n");
    scanf("%d", &num);

    /*int finded = search(arr, len, num);
    if (finded == -1){
        printf("THE NUMBER IS NOT IN THE ARRAY \n");
    }
    else{
        printf("THE NUMBER IS IN POSITION: %d\n", finded);
    }
    printf("--ARRAY SORTER-- \n");
    sort(arr, len);
    printf("\n");
    */
    printf("--ORIGINAL ARRAY-- \n");
    printf("{ ");
    ImprimeMatriz(arr, len);
    printf("}");
    
    return 0;
}