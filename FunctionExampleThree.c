#include <stdio.h>

int display(int);

int main()
{

    int k, sum;         // variable declaration
    int i = 200;        // by default, the scope of a variable is 
                        // local to the function in which it is defined.
    display(i);         // Hence, to use 'i' in display(), it need be passed to it

    sum = (i + display(k));
    printf("%d\n", sum);
    return 0;
}

int display(int j)
{
    int k = 350;            // scope of a variable is local to the function
                            // it is defined
    printf("%d\n", j);
    printf("%d\n", k);

   return (k);          //  if we want k to be available to main( ),
                        //  we will have to return it to main( ) using the return statement.
}