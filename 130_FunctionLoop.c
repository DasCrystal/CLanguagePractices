#include <stdio.h>

/*
#function
#loop

呼叫函式時會在記憶體中製造出一個新的作用域，作用域之間不會互相干擾。
*/

int f(int);

int main() {

    f(0);

    printf("\n");

    return 0;

}

int f(int x) {

    printf("\r%d",x);

    if (x == 64908) {

        return x;

    } else {

        return f(x+1);

    }
    
}