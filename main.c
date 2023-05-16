#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <customs/test.h>
#include <customs/carte.h>
#include <customs/carte_sans_img.h>
#include <customs/voiture.h>
#include <customs/feu_de_signalisation1.h>
#include <customs/feu_de_signalisation2.h>
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
    SDL_Surface *surface, *cadre1, *cadre2, *cadre3, *voiture = NULL, *voiture1 = NULL, *voiture2 = NULL, *voiture3 = NULL, *voiture4 = NULL, *cadre4 = NULL;
    SDL_Texture *texture = NULL, *texture2 = NULL, *texture3 = NULL, *texture4 = NULL, *texture5 = NULL, *testureV, *testureV1 = NULL;
    size_t G;
    SDL_Renderer *renderer = NULL;
    SDL_Renderer *renderer1 = NULL;

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

    SDL_RenderPresent(renderer);
    // Mix_Music *son1;
    // son1 = Mix_LoadMUS("son/son.mp3");

    // Mix_PlayMusic(son1, -1); // lecture du son
    //---------------------------------------------------------------------------------------------------------------------------------------------------------
    cadre1 = IMG_Load("image/locol.jpg");
    cadre2 = IMG_Load("image/maison2.jpg");
    cadre3 = IMG_Load("image/arbre.jpg");
    cadre4 = IMG_Load("image/hopit.jpg");
    voiture = IMG_Load("image/img/img4.png");
    voiture1 = IMG_Load("image/img/img44.png");
    voiture2 = IMG_Load("image/img/img5.png");
    voiture3 = IMG_Load("image/img/img11.png");
    voiture4 = IMG_Load("image/img/img111.png");
    /*******************************************************************************************************************************************/
    
        load_carte(renderer,
               surface,
               cadre1,
               cadre2,
               cadre3,
               cadre4,
               texture2,
               texture3,
               texture4,
               texture5);

    SDL_bool isV2 = SDL_FALSE;
    SDL_bool isBlockFront = SDL_FALSE;

    // voiture 1
    int d1 = -40;
    int d2 = 430;
    // voiture 2
    int d5 = -40;
    int d6 = 430;

    // voiture 3
    int d3 = 425;
    int d4 = 0;
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
<<<<<<< HEAD
        /*
            si d1 qui represente la position x de la voiture et qui est ajoute de 30 pixel chaque seconde
            est inferieur ou egale a 430 pixel on affiche la voiture 1 qui se deplace horizotalement
        */
=======


        
>>>>>>> 33be766fc39311d3166ea713056b4f454f14816e
        if (d1 <= 430)
        {
            voiture_(renderer, d1, d2, 0, voiture, testureV, 0, 0, 0, 140, 180);
        }
        /*
            si d1 qui represente la position x de la voiture et qui est ajoute de 30 pixel chaque seconde
            est supperieur ou egale a 430 pixel on affiche la voiture 1 qui se deplace verticament
        */
        else
        {
            voiture_(renderer, d1, d2, 0, voiture1, testureV1, 0, 0, 0, 180, 140);
        }

        /*
            isV2 est bool qui va permettre d'ajouter le voiture 2 dans la course
        */
        if (isV2)
        {
            /*
                si d1 qui represente la position x de la voiture et qui est ajoute de 30 pixel chaque seconde
                est inferieur ou egale a 430 pixel on affiche la voiture 2 qui se deplace horizotalement
            */
            if (d5 <= 430)
            {
                voiture_(renderer, d5, d6, 0, voiture3, testureV, 0, 0, 0, 140, 180);
            }
            /*
                si d1 qui represente la position x de la voiture et qui est ajoute de 30 pixel chaque seconde
                est inferieur ou egale a 430 pixel on affiche la voiture 2 qui se deplace horizotalement
            */

            else
            {
                voiture_(renderer, d5, d6, 0, voiture4, testureV1, 0, 0, 0, 180, 140);
            }
        }

        /*
            ici represente la voiture 3
        */
        voiture_(renderer, d3, d4, 0, voiture2, testureV1, 0, 0, 0, 180, 180);

        /*
            feu 2 et 3
        */
        feu_de_signalisation2(renderer, 1, 1, 90, 30, 0, 0, 0, 0, 0, 0, 1);
        feu_de_signalisation2(renderer, 219, 280, 90, 30, 0, 0, 0, 0, 0, 0, 0);

        /*
            feu 1 et 4
        */
        feu_de_signalisation1(renderer, 219, 60, 30, 80, 0, 0, 25, -25, 50, -55, 1);
        feu_de_signalisation1(renderer, -60, 280, 30, 80, 0, 0, 25, -25, 50, -55, 0);

        // V1
        /*
            isBlockFront est un bool qui verifie si la voiture 1 se trouve derrrier la voiture 2
            au moment ou la voiture 2 est blocke ppar le feu au rouge
        */
        if (!isBlockFront)
        {
            /*
                ici avec (p1_ > 20 && p1_ <= 35) qui signifie que p1 appartient a ]20, 35] et indique le feu au rouge
                p1 represente le compteur de feu 2
                donc on verifie si le compteur de feu est au rouge 
            */
            if (p1_ > 20 && p1_ <= 35)
            {
                /*
                    on verifie si la position x de la voiture 1 est egale a 250 pixel c a d sur le bout du passage pieton gauche
                */
                if (d1 == 250)
                {
                    // si la condition est verifie la voiture 1 reste stable
                }
                else
                {
                    //sinon voiture 1 peut continuer a avancer
                    if (d1 <= 430)
                    {
                        d1 += 20;
                    }
                    else if (d2 <= 700)
                    {
                        isV2 = SDL_TRUE;
                        d2 += 30;
                    }
                    else
                    {
                        d2 = 430;
                        d1 = -40;
                    }
                }
            }
            else
            {
                /*
                    dans le cas contraire il peut traverser le feu car c'est soit au vert ou orange 
                */
                if (d1 <= 430)
                {
                    d1 += 20;
                }
                else if (d2 <= 700)
                {
                    isV2 = SDL_TRUE;
                    d2 += 30;
                }
                else
                {
                    d2 = 430;
                    d1 = -40;
                }
            }
        }

        // V3
            /*
                ici avec (p2_ > 20 && p2_ <= 35) qui signifie que p2 appartient a ]20, 35] et indique le feu au rouge
                p1 represente le compteur de feu 2
                donc on verifie si le compteur de feu est au rouge 
            */

        if (p2_ > 20 && p2_ <= 35)
        {
                 /*
                    on verifie si la position x de la voiture 3 est egale a 250 pixel c a d sur le bout du passage pieton gauche
                */

            if (d4 == 150)
            {
              // si la condition est verifie la voiture 1 reste stable
            }
            else
            {
             //sinon voiture 3 peut continuer a avancer
                if (d4 <= 700)
                {
                    d4 += 30;
                }
                else
                {
                    d3 = 425;
                    d4 = 0;
                }
            }
        }
        else
        {
                            /*
                    dans le cas contraire il peut traverser le feu car c'est soit au vert ou orange 
                */

            if (d4 <= 700)
            {
                d4 += 30;
            }
            else
            {
                d3 = 425;
                d4 = 0;
            }
        }

        
        // V2

        if (isV2)
        {
            if (p1_ > 20 && p1_ <= 35)
            {
                if (d1 >= 65)
                {
                    // rien la voiture 1 reste stable
                    isBlockFront = SDL_TRUE;
                }
                if (d5 == 240)
                {
                }
                else
                {
                    isBlockFront = SDL_FALSE;
                    if (d5 <= 430)
                    {
                        d5 += 20;
                    }
                    else if (d6 <= 700)
                    {
                        d6 += 30;
                    }
                    else
                    {
                        d6 = 430;
                        d5 = -40;
                    }
                }
            }
            else
            {
                isBlockFront = SDL_FALSE;
                if (d5 <= 430)
                {
                    d5 += 20;
                }
                else if (d6 <= 700)
                {
                    d6 += 30;
                }
                else
                {
                    d6 = 430;
                    d5 = -40;
                }
            }
        }

        SDL_Delay(1000);
        // if (d1 <= 410 || d2 <= 700)
        // {
            
         load_cart_not_img(renderer); // }
                                     // d1++;
         // SDL_RenderClear(renderer);
    //      SDL_FreeSurface(voiture3);
    //      SDL_FreeSurface(voiture4);
    //      SDL_FreeSurface(voiture);
    //      SDL_FreeSurface(voiture1);
    //      SDL_FreeSurface(voiture2);
    //  SDL_DestroyTexture(testureV1);
    //  SDL_DestroyTexture(testureV);
                            // d2++;
    }
    SDL_FreeSurface(surface);
    SDL_FreeSurface(cadre1);
    SDL_FreeSurface(cadre2);
    SDL_FreeSurface(cadre3);
    SDL_FreeSurface(cadre4);
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);

    SDL_Quit();
    return 0;
}
