#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <customs/test.h>
#include <customs/carte.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_image.h>

struct carre
{
    SDL_Rect rect;
    Uint32 couleur;
};
int main(int argc, char *argv[])
{
    printf("%d", pui);
    SDL_Window *window = NULL;
    SDL_Surface *surface, *cadre1, *cadre2, *cadre3, *cadre4 = NULL;
    SDL_Texture *texture = NULL, *texture2 = NULL, *texture3 = NULL, *texture4 = NULL, *texture5 = NULL;
    size_t G;
    SDL_Renderer *renderer = NULL;

    int statut = EXIT_FAILURE;

    SDL_Color vert = {0, 255, 0, 255};

    int RenderFillRect(SDL_Renderer * renderer, const SDL_Rect *rect);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    int SDL_RendererDrawPoint(SDL_Renderer * renderer, const SDL_Point *points, int x, int y);
    int SDL_RenderDRawPoint(SDL_Renderer * renderer, const SDL_Point *points, int x,
                            int y);

    int SDL_RenderCopy(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect *srcrect, const SDL_Rect *dstrect);

    if (0 != SDL_Init(SDL_INIT_VIDEO))
    {
        fprintf(stderr, "erreur SDL_Init : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    window = SDL_CreateWindow("feux de carrefour", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_UNDEFINED,
                              1200, 800, 0);
    surface = SDL_CreateRGBSurface(0, 32, 32, 32, 0, 0, 0, 0);
    if (NULL == window)
    {
        fprintf(stderr, "Erreur SDL_CreateWindow: %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (NULL == renderer)
    {
        fprintf(stderr, "Erreur SDL_CreateRenderer : %s", SDL_GetError());
    }

    if (0 != SDL_SetRenderDrawColor(renderer, vert.r, vert.g, vert.b, vert.a))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());
    }
    if (0 != SDL_RenderClear(renderer))
    {
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor :%s", SDL_GetError());
    }

    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 300, 300);

    if (NULL == texture)

        fprintf(stderr, "Erreur SDL_CreateTexture: %s", SDL_GetError());

    /*on cr�� 4 carr�s pour notre feu*/
    struct carre carre[4] = {

        {{4, 4, 10, 10}, SDL_MapRGB(surface->format, 0, 0, 0)},        /*NOIR*/
        {{4, 18, 10, 10}, SDL_MapRGB(surface->format, 255, 0, 0)},     /*bleu*/
        {{18, 4, 10, 10}, SDL_MapRGB(surface->format, 0, 255, 0)},     /*vert*/
        {{18, 18, 10, 10}, SDL_MapRGB(surface->format, 255, 127, 40)}, /*blanc*/
    };
    // on remplit notre surface grace a nos carres
    for (G = 0; G < 4; G++)
    {
        SDL_FillRect(surface, &carre[G].rect, carre[G].couleur);
        SDL_SetWindowIcon(window, surface);
    }
    // innitialisation de SDL_image:
    if (IMG_Init(IMG_INIT_PNG) < 0)
    {
        printf("ERReur lors de l'initialisation de SDL_image:%s\n", IMG_GetError());
        return 1;
    }
    // chargement de l'image avec sdl_image:
    SDL_Surface *image =
        IMG_Load("nom.png");
    if (!image)
    {
        printf("Erreur lors du chargement de l'image:%s\n", IMG_GetError());
        return 1;
    }

    // partie musique

    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

        SDL_RenderPresent(renderer );
    // Mix_Music *son1;
    // son1 = Mix_LoadMUS("son/son.mp3");

    // Mix_PlayMusic(son1, -1); // lecture du son
    //---------------------------------------------------------------------------------------------------------------------------------------------------------

    load_carte(renderer,surface,
                      cadre1,
                      cadre2,
                      cadre3,
                      cadre4,
                      texture,
                      texture2,
                      texture3,
                      texture4,
                      texture5,);

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

    SDL_bool u = SDL_TRUE;
    while (u)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {

            SDL_RenderPresent(renderer);
            switch (event.type)
            {
            case SDL_QUIT:
                u = SDL_FALSE;
                break;
            default:
                break;
            }
        }
        int ji = 0;
        for (ji = 0; ji < 50; ji++)
        {
            // feu vert1
            SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
            SDL_RenderFillRect(renderer, &pt1);

            // feu vert2
            SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
            SDL_RenderFillRect(renderer, &pt111);
            // feu vert 3
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt2222);
            // feu vert 4
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt2222d);

            SDL_RenderPresent(renderer);

            SDL_Delay(500);
            // vert sombre1
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt11);
            // vert sombre 3
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt22221);
            // feu vert sombre 4
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt2222dd);

            // feu vert sombre2
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt1111);

            // feu orange1
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt3);
            // orange2
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt345);
            // orange 3
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt3453111);
            // feu orange 4
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt3453111bb);
            SDL_RenderPresent(renderer);

            SDL_Delay(200);

            // feu orange 4 sombre
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &ptto);

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt33);
            // orange 2 sombre
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt3455);
            // orange 3 sombre

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt3332);

            // feu rouge1
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt2);
            // feu rouge 2
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt222);
            // feu rouge3
            SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
            SDL_RenderFillRect(renderer, &pt1m1);

            // feu rouge4
            SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
            SDL_RenderFillRect(renderer, &pt1m1n);

            SDL_Delay(500);
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt22);
            // feu rouge3 sombre
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt11m1);
            // feu rouge sombre 4
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt11m1zz);

            // feu rouge sombre
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt221);
            SDL_RenderPresent(renderer);

            SDL_Delay(200);

            // feu orange1
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt34);
            // feu orange 2
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt344);

            // orange 3

            SDL_SetRenderDrawColor(renderer, 255, 130, 40, 255);
            SDL_RenderFillRect(renderer, &pt33323);

            // feu orange 4
            SDL_SetRenderDrawColor(renderer, 255, 127, 40, 255);
            SDL_RenderFillRect(renderer, &pt3453111bb2);
            SDL_RenderPresent(renderer);

            SDL_Delay(500);
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt341);

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt3411);

            // orange 3 sombre

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt333233);

            // feu orange 4 sombre
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderFillRect(renderer, &pt3453111bbbb);

            SDL_RenderPresent(renderer);
        }
    }
    SDL_Quit();
    return 0;
}
