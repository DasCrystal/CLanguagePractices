#include <stdio.h>
#include <math.h>

int main() {

    int x, r, v, n;

    scanf("%d %d %d %d", &x, &r, &v, &n);

    for (int lo = 0; lo < n; lo += 1) {

        int local, V;
        scanf("%d %d", &local, &V);
        
        if (local == x) {

            x -= 15;

            continue;
        }

        if (abs(local - x) <= r) {

            if (V >= v) {

                // 閃球
                if (local > x) {

                    x -= 15;

                } else { // (local < x)

                    x += 15;

                }

            } else {

                // 接球
                x = local;

            }

        }

    }

    printf("%d", x);

}