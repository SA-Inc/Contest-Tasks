// https://www.codewars.com/kata/515decfd9dcfc23bb6000006

#include <stdio.h>
#include <string.h>

int is_valid_ip(const char* addr) {
    int segs = 0;
    int chcnt = 0;
    int accum = 0;

    if (addr == NULL) {
        return 0;
    }

    while (*addr != '\0') {
        if (*addr == '.') {
            if (chcnt == 0) {
                return 0;
            }
            if (++segs == 4) {
                return 0;
            }

            chcnt = accum = 0;
            addr++;
            continue;
        }

        if ((*addr < '0') || (*addr > '9')) {
            return 0;
        }
        if ((chcnt > 0) && (accum == 0)) {
            return 0;
        }
        if ((accum = accum * 10 + *addr - '0') > 255) {
            return 0;
        }
        chcnt++;
        addr++;
    }
    if (segs != 3) {
        return 0;
    }

    if (chcnt == 0) {
        return 0;
    }

    return 1;
};
