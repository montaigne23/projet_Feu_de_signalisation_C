#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

void voiture_(SDL_Renderer *renderer,
              int x,
              int y,
              int status,
              SDL_Surface *cadre,
              SDL_Texture *texture, int x_feu, int y_feu, int etat_feu)
{
    if (cadre == NULL)
    {
        fprintf(stderr, "erreur PARC : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    texture = SDL_CreateTextureFromSurface(renderer, cadre);
    if (texture == NULL)
    {
        fprintf(stderr, "erreur texture : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    SDL_Rect parc;
    parc.x = x;
    parc.y = y;

    if (SDL_QueryTexture(texture, NULL, NULL, &parc.h, &parc.w) != 0)
    {
        fprintf(stderr, "erreur query : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    parc.h = 140;
    parc.w = 180;

    if (SDL_RenderCopy(renderer, texture, NULL, &parc) != 0)
    {
        fprintf(stderr, "erreur copy : %s", SDL_GetError());
        //  return EXIT_FAILURE;
    }


    // SDL_DestroyTexture(texture);
    // SDL_FreeSurface(cadre);
    SDL_RenderPresent(renderer);
}