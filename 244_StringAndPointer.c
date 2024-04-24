#include <stdio.h>

/*
#char
#string
#const
#pointer

const
    讓指定的資料的內容，也就是內容的記憶體空間唯讀。
    
*/

int main() {

    char hello[] = "hello";      // 陣列 // 內容可讀可寫，覆寫內容是編譯期錯誤
    char *colorful = "colorful"; // 指標 // 內容可讀不可寫，本身可以被覆寫，寫入內容是「未定義行為」
    const char *world = "world"; // 常數 // 內容可讀不可寫，本身可以被覆寫*，寫入內容是編譯期錯誤
    // *：在對 const char * 賦值的時候，
    // 雖然表面上看起來被覆寫了，
    // 但其實新的值是被賦到了另一塊記憶體空間，
    // 然後這個被賦值的指針再把地址指到新的那塊記憶體空間。

    // hello = "Hello";        // X

    colorful = "Colorful";  // O

    world = "World";        // X

    printf("%s %s %s\n", hello, colorful, world);

    return 0;
}