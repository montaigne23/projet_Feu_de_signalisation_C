#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
int p1 = 1;
int feu_de_signalisation1(SDL_Renderer *renderer, int x, int y, int h, int l, int x_feu1, int y_feu1, int x_feu2, int y_feu2, int x_feu3, int y_feu3)
{
    SDL_Rect pt1 = {443 + x + x_feu1, 265 + y + y_feu1, 25, 25};
    SDL_Rect pt3 = {443 + x + x_feu2, 290 + y + y_feu2, 25, 25};
    SDL_Rect pt2 = {443 + x + x_feu3, 320 + y + y_feu3, 25, 25};

    SDL_Rect dff = {441 + x, 261 + y, l, h};
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderFillRect(renderer, &dff);
    int p_ = p1;
    switch (p1)
    {
    case p_ < = 15:
        // feu vert1
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderFillRect(renderer, &pt1);
        SDL_RenderPresent(renderer);
        p1++;
        break;
    case p1 >= 15 & p1 >= 20:
        // feu orange1
        SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
        SDL_RenderFillRect(renderer, &pt3);
        SDL_RenderPresent(renderer);
        p1++;
        break;
    case p1 >= 20 & p1 <= 35:
        // feu rouge1
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &pt2);
        SDL_RenderPresent(renderer);
        p1 = 1;
        break;
    default:
        break;
    }

    // Sombre
    //  SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    //  SDL_RenderFillRect(renderer, &pt1);
    //  // feu orange1
    //  SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
    //  SDL_RenderFillRect(renderer, &pt3);
    //  // feu rouge1
    //  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    //  SDL_RenderFillRect(renderer, &pt2);
    //  SDL_RenderPresent(renderer);
    // p1++;
    return 0;
}