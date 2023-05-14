#include <stdio.h>
#include <stdlib.h>

int pui = 50;
        // int ji = 0;
        // for (ji = 0; ji < 50; ji++)
        // {
        //     // feu vert1
        //     SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt1);

        //     // feu vert2
        //     SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt111);
        //     // feu vert 3
        //     SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt2222);
        //     // feu vert 4
        //     SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt2222d);

        //     SDL_RenderPresent(renderer);

        //     SDL_Delay(500);
        //     // vert sombre1
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt11);
        //     // vert sombre 3
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt22221);
        //     // feu vert sombre 4
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt2222dd);

        //     // feu vert sombre2
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt1111);

        //     // feu orange1
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt3);
        //     // orange2
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt345);
        //     // orange 3
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt3453111);
        //     // feu orange 4
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt3453111bb);
        //     SDL_RenderPresent(renderer);

        //     SDL_Delay(200);

        //     // feu orange 4 sombre
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &ptto);

        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt33);
        //     // orange 2 sombre
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt3455);
        //     // orange 3 sombre

        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt3332);

        //     // feu rouge1
        //     SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt2);
        //     // feu rouge 2
        //     SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt222);
        //     // feu rouge3
        //     SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt1m1);

        //     // feu rouge4
        //     SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt1m1n);

        //     SDL_Delay(500);
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt22);
        //     // feu rouge3 sombre
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt11m1);
        //     // feu rouge sombre 4
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt11m1zz);

        //     // feu rouge sombre
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt221);
        //     SDL_RenderPresent(renderer);

        //     SDL_Delay(200);

        //     // feu orange1
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt34);
        //     // feu orange 2
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt344);

        //     // orange 3

        //     SDL_SetRenderDrawColor(renderer, 255, 130, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt33323);

        //     // feu orange 4
        //     SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        //     SDL_RenderFillRect(renderer, &pt3453111bb2);
        //     SDL_RenderPresent(renderer);

        //     SDL_Delay(500);
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt341);

        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt3411);

        //     // orange 3 sombre

        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt333233);

        //     // feu orange 4 sombre
        //     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        //     SDL_RenderFillRect(renderer, &pt3453111bbbb);

        //     SDL_RenderPresent(renderer);
        // }
    load_carte(renderer,
               surface,
               cadre1,
               cadre2,
               cadre3,
               cadre4,
               texture,
               texture2,
               texture3,
               texture4,
               texture5);

    /*******************************************************************************************************************************************/
    SDL_Rect pt1 = {443, 265, 25, 25};

    SDL_Rect pt111 = {662, 540, 25, 25};

    SDL_Rect pt2222 = {662, 325, 25, 25};

    SDL_Rect pt2222d = {443, 601, 25, 25};

    SDL_Rect pt11 = {443, 265, 25, 25};

    SDL_Rect pt22221 = {662, 325, 25, 25};

    SDL_Rect pt2222dd = {443, 601, 25, 25};

    SDL_Rect pt1111 = {662, 540, 25, 25};

    SDL_Rect pt3 = {443, 290, 25, 25};

    SDL_Rect pt345 = {662, 560, 25, 25};

    SDL_Rect pt3453111 = {662, 298, 25, 25};

    SDL_Rect pt3453111bb = {443, 570, 25, 25};

    SDL_Rect ptto = {443, 570, 25, 25};

    SDL_Rect pt33 = {443, 290, 25, 25};

    SDL_Rect pt3455 = {662, 560, 25, 25};

    SDL_Rect pt3332 = {662, 298, 25, 25};

    SDL_Rect pt2 = {443, 320, 25, 25};

    SDL_Rect pt222 = {662, 590, 25, 25};

    SDL_Rect pt1m1 = {662, 268, 25, 25};

    SDL_Rect pt1m1n = {443, 548, 25, 25};

    SDL_Rect pt22 = {443, 320, 25, 25};

    SDL_Rect pt11m1 = {662, 268, 25, 25};

    SDL_Rect pt11m1zz = {443, 548, 25, 25};

    SDL_Rect pt221 = {662, 590, 25, 25};

    SDL_Rect pt34 = {443, 290, 25, 25};

    SDL_Rect pt344 = {662, 560, 25, 25};

    SDL_Rect pt33323 = {662, 298, 25, 25};

    SDL_Rect pt3453111bb2 = {443, 570, 25, 25};

    SDL_Rect pt341 = {443, 290, 25, 25};

    SDL_Rect pt3411 = {662, 560, 25, 25};

    SDL_Rect pt333233 = {662, 298, 25, 25};

    SDL_Rect pt3453111bbbb = {443, 570, 25, 25};


