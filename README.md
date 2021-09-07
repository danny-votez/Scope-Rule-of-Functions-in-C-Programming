# Scope-Rule-of-Functions-in-C-Programming
The lesson explains and depicts Scope Rule of Functions and their application in C Programming

<code>
<pre>
#include <stdio.h>


int display(int);


int main()
{


int k, sum;         // variable declaration
int i = 200;        // by default, the scope of a variable is 
                    // local to the function in which it is defined.
display(i);         // Hence, to use 'i' in display(), it need be passed to it

return 0;

}


int display(int j)
{
int k = 350;            // scope of a variable is local to the function
// it is defined
printf("The Value of j is: %d\n", j);
printf("The Value of k is: %d\n", k);



//Note: if we want k to be available to main( ),
//  we will have to return it to main( ) using the return statement.
}
</pre>
</code>

# Sample Run-time Screen

![image](https://user-images.githubusercontent.com/77758884/132325326-7b6f5324-ae48-4e04-9054-d3be9ac581ec.png)
