#include <stdio.h>


/* 字面常數
    即沒有聲明為變數，直接寫死在程式碼中的資料，
    其也必須經過電腦處理，所以一樣會帶有型別，如下表。
   數字型別
    int   ：沒有任何標記的整數：3
    double：含有小數點的小數  ：3.3, 3.0, 3.
    float ：尾部有個f標記     ：3.3f
   轉型
    隱式轉型
     兩種不同的型別無法直接運算，必須要轉成相同的型別才能
     算出結果，而C語言的轉換規則是把範圍小的型別轉成範圍大的
     ，而運算後的結果也會有型別，結果的型別是由原本的兩個
     型別決定的，例如：
      double a; int b;
     int c = a + b; // a is int; b is double
      a 轉 double -> a is double; b is double
      a + b 結果轉 int -> c 是int
    顯式轉型
     (要轉成的目標型別) 變數;
     int a; (double) a;
*/
int main() {
    double num1, num2, num3, result = 0;
    printf("\nFirst Number:");
    scanf("%lf", &num1);
    num1 /= 3; result += num1;
    printf("\nSecond Number:");
    scanf("%lf", &num2);
    num2 /= 3; result += num2;
    printf("\nThird Number:");
    scanf("%lf", &num3);
    num3 /= 3; result += num3;
    printf("Result is %lf\n", result);
    return result;
}