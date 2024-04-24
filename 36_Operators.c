#include <stdio.h>

/*
#operator
運算子的優先順序
先	!			「非」				由右至左
	*,/,%		「乘、除、取模」	由左至右				
	+,-			「加、減」			由左至右		
	>,<,>=,>=	「大於、等於...」	由左至右
	==,!=		「等於、不等於」	由左至右
	&&			「且」				由左至右
	||			「或」				由左至右
後	=			「賦值(變成)」		由右至左

善用括弧，讓表達式的語義更清楚，更容易閱讀。
*/


int main() {
	int zero= !(1 + 3 * 10 / 2 < 100);
    printf("%d\n", zero);
    return 0;
}