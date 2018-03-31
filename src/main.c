#include <stdio.h>
#include "sbuffer.h"

struct point
{
    int x, y;
};

int main(int argc, char **argv)
{
    struct point *buf = 0;

    for (int i = 0; i < 24; ++i) {
        struct point p = { i, 2*i };
        buf_push(buf, p);
    }

    for (int i = 0; i < buf_len(buf); ++i) {
        struct point p = buf[i];
        printf("%d, %d\n", p.x, p.y);
    }

    buf_free(buf);
    return 0;
}
