#include "golf.h"

int main()
{
    golf gf;
    setgolf(gf, "rayzuo", 3);
    showgolf(gf);

    const int GolfCount = 5;
    golf someGolfs[GolfCount];
    for(int i= 0; i < GolfCount; i++)
    {
        int result = setgolf(someGolfs[i]);
        if(!result)
          break;

        handicap(someGolfs[i], i + 1);
    }

    for(int i= 0; i < GolfCount; i++)
    {
        showgolf(someGolfs[i]);
    }

    return 0;
}
