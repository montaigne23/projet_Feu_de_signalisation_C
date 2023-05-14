#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int feu_de_signalisation(SDL_Renderer *renderer, int x, int y)
{
    SDL_Rect pt1 = {443+x, 265+y, 25, 25};
    SDL_Rect pt3 = {443+x, 290+y, 25, 25};
    SDL_Rect pt2 = {443+x, 320+y, 25, 25};

    SDL_Rect dff = {441+x, 261+y, 30, 90};
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderFillRect(renderer, &dff);

    // feu vert1
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &pt1);
    // feu orange1
    SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
    SDL_RenderFillRect(renderer, &pt3);
    // feu rouge1
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &pt2);
    SDL_RenderPresent(renderer);

    return 0;
}