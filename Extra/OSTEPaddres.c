#include <stdio.h>

int main() {

    // 1~50
    for (int lo = 1; lo <= 50; lo += 1) {

        printf("https://pages.cs.wisc.edu/~remzi/OSTEP/Chinese/%02d.pdf\n", lo);

    }

    // special tail
    char *tail[8] = {"BF1", "a-fy", "b-bq", "bf2", "bf3", "d-yb", "preface", "toc"};
    for (int lo = 0; lo < 8; lo += 1) {

        printf("https://pages.cs.wisc.edu/~remzi/OSTEP/Chinese/%s.pdf\n", tail[lo]);

    }

    // fl abc
    for (char lo = 'a'; lo <= 'g'; lo += 1) {

        printf("https://pages.cs.wisc.edu/~remzi/OSTEP/Chinese/fl%c.pdf\n", lo);
    }
}