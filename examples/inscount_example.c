#include <string.h>
#include <stdio.h>

int get_char(int x, int upper)
{
        char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        int ret = 0;
        ret += set[x];
        ret += upper;

        // Simulate Crackme doing lots of stuff
        x -= 2500;
        for (int i = 0; i < 2500; ++i)
                x += 2;
        x -= 2500;
        return ret;
}

int main(int argc, char **argv)
{
        if (argc < 2)
                return -1;

        if (strlen(argv[1]) >= 22)
        {

                int i = 0;

                if (argv[1][i++] != get_char(8, 0))
                        return -1;
                if (argv[1][i++] != get_char(13, 32))
                        return -1;
                if (argv[1][i++] != get_char(18, 0))
                        return -1;
                if (argv[1][i++] != get_char(33, 0))
                        return -1;
                if (argv[1][i++] != get_char(17, 32))
                        return -1;
                if (argv[1][i++] != get_char(20, 32))
                        return -1;
                if (argv[1][i++] != get_char(2, 32))
                        return -1;
                if (argv[1][i++] != get_char(19, 32))
                        return -1;
                if (argv[1][i++] != get_char(8, 0))
                        return -1;
                if (argv[1][i++] != get_char(26, 0))
                        return -1;
                if (argv[1][i++] != get_char(13, 32))
                        return -1;
                if (argv[1][i++] != get_char(2, 0))
                        return -1;
                if (argv[1][i++] != get_char(14, 32))
                        return -1;
                if (argv[1][i++] != get_char(20, 32))
                        return -1;
                if (argv[1][i++] != get_char(13, 32))
                        return -1;
                if (argv[1][i++] != get_char(19, 0))
                        return -1;
                if (argv[1][i++] != get_char(8, 32))
                        return -1;
                if (argv[1][i++] != get_char(13, 0))
                        return -1;
                if (argv[1][i++] != get_char(33, 0))
                        return -1;
                if (argv[1][i++] != get_char(29, 0))
                        return -1;
                if (argv[1][i++] != get_char(20, 32))
                        return -1;
                if (argv[1][i++] != get_char(11, 32))
                        return -1;
                if (argv[1][i++] != get_char(25, 32))
                        return -1;


        }

        return -2;
}