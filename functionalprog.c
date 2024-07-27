/*header files layer*/
#include <stdio.h>
#include <stdint.h>

/*function pointer*/
int (*func_ptr)(int x);


/*Pure functions start here*/
 int square(int v)
{
    return v * v;
}
 int cube(int v)
{
    return v*v*v;
}
/*Pure functions end here*/

/*Higher level functions*/
void print_arr(int *arr, int len, int (*p)(int))
{
    if(p == NULL)
    {

        for(int i = 0; i < len; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
    for(int j = 0; j < len; j++)
        printf("%d ", p(arr[j]));
    printf("\n");
}


/*main implementation*/
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};

    int length = sizeof(arr)/sizeof(int);

    printf("#########exact array##########\n");
    print_arr(arr, length, NULL);

    printf("########square of array#######\n");
    print_arr(arr, length, square);

    printf("########cube of array#########\n");
    print_arr(arr, length, cube);

    return 0;
}
