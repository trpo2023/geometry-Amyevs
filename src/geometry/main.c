#include <libgeometry/parser.h>

int main()
{
    char* helpme
            = "Enter the shape, for example: circle(0 0, 1.5)\n"
              "To exit, enter q.\n";
    puts(helpme);
    parse_start();
    return 0;
}