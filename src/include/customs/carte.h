#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

void load_carte(SDL_Renderer *renderer,
                SDL_Surface *surface,
                SDL_Surface *cadre1,
                SDL_Surface *cadre2,
                SDL_Surface *cadre3,
                SDL_Surface *cadre4,
                SDL_Texture *texture2,
                SDL_Texture *texture3,
                SDL_Texture *texture4,
                SDL_Texture *texture5)
{

    SDL_Rect rect = {0, 350, 1200, 190};
    SDL_SetRenderDrawColor(renderer, 130, 130, 130, 255);
    SDL_RenderFillRect(renderer, &rect);

    SDL_Point point[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    size_t i = 0;
    for (i = 0; i <= 1200; i++)
    {
        point[i].x = i;
        point[i].y = 350;
    }
    SDL_RenderDrawPoints(renderer, point, 1200);

    SDL_Point point2[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    size_t j = 0;
    for (j = 0; j <= 1200; j++)
    {
        point2[j].x = j;
        point2[j].y = 540;
    }
    /*SDL_RenderDrawPoints(renderer,point2,1200);*/

    SDL_Point point3[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    size_t s = 0;
    for (s = 0; s <= 350; s++)
    {
        point2[s].x = 469;
        point2[s].y = s;
    }

    SDL_RenderDrawPoints(renderer, point2, 1200);

    SDL_Point point4[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t v = 0;
    for (v = 0; v <= 350; v++)
    {
        point4[v].x = 660;
        point4[v].y = v;
    }
    SDL_RenderDrawPoints(renderer, point4, 1200);

    SDL_Point point5[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t w = 541;
    for (w = 541; w <= 800; w++)
    {
        point5[w].x = 469;
        point5[w].y = w;
    }

    SDL_RenderDrawPoints(renderer, point5, 1200);

    SDL_Point point6[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t z = 541;
    for (z = 541; z <= 800; z++)
    {
        point6[z].x = 660;
        point6[z].y = z;
    }
    SDL_RenderDrawPoints(renderer, point6, 1200);

    SDL_Point point7[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t l = 0;
    for (l = 0; l <= 600; l++)
    {
        point7[l].x = l;
        point7[l].y = 300;
    }
    // ligne du trotoire droit
    SDL_RenderDrawPoints(renderer, point7, 1200);

    SDL_Point point8[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t m = 650;
    for (m = 650; m <= 1200; m++)
    {
        point8[m].x = m;
        point8[m].y = 300;
    }

    SDL_RenderDrawPoints(renderer, point8, 1200);

    // ligne du trotoire droit dessous

    SDL_Point point9[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t d = 650;
    for (d = 650; d <= 1200; d++)
    {
        point9[d].x = d;
        point9[d].y = 590;
    }

    SDL_RenderDrawPoints(renderer, point9, 1200);
    // ligne du trotoir du bas

    SDL_Point point10[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t g = 0;
    for (g = 0; g <= 600; g++)
    {
        point10[g].x = g;
        point10[g].y = 590;
    }

    SDL_RenderDrawPoints(renderer, point10, 1200);
    // ligne du trotoire du bas a gauche
    SDL_Point point11[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t k = 543;
    for (k = 541; k <= 1200; k++)
    {
        point11[k].x = 415;
        point11[k].y = k;
    }

    SDL_RenderDrawPoints(renderer, point11, 1200);

    SDL_Point point12[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t h = 543;
    for (h = 541; h <= 1200; h++)
    {
        point12[h].x = 715;
        point12[h].y = h;
    }

    SDL_RenderDrawPoints(renderer, point12, 1200);
    // ligne gauche  de la route en haut
    SDL_Point point13[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t p = 0;
    for (p = 0; p <= 300; p++)
    {
        point13[p].x = 415;
        point13[p].y = p;
    }

    SDL_RenderDrawPoints(renderer, point13, 1200);
    // ligne droite de la route en haut
    SDL_Point point14[1200];
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    size_t a = 0;
    for (a = 0; a <= 300; a++)
    {
        point14[a].x = 715;
        point14[a].y = a;
    }

    SDL_RenderDrawPoints(renderer, point14, 1200);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect1 = {470, 0, 190, 800};
    SDL_SetRenderDrawColor(renderer, 130, 130, 130, 255);
    SDL_RenderFillRect(renderer, &rect1);
    // rectangle du trotoire de la route gauche
    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect2 = {0, 301, 469, 49};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect2);
    // trotoire de la route droit
    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect3 = {250, 300, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect3);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rectm = {0, 541, 469, 49};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectm);
    // rectangle du trotoire de la route droite

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rects = {661, 541, 1200, 49};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rects);
    // trotoire de la route droite

    // trotoire2 droit
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect65 = {661, 301, 1200, 49};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect65);
    // fin trotoire

    // passage pieton du haut
    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect35 = {480, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect35);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect36 = {500, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect36);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect37 = {520, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect37);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect38 = {540, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect38);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect39 = {560, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect39);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect40 = {580, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect40);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect41 = {600, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect41);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect42 = {620, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect42);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect43 = {640, 290, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect43);
    // passage pieton du bas de la route horizontale

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect45 = {480, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect45);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect47 = {500, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect47);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect48 = {520, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect48);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect49 = {540, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect49);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect50 = {560, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect50);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect51 = {580, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect51);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect52 = {600, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect52);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect53 = {620, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect53);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect54 = {640, 550, 10, 50};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect54);
    // route des pietons de la route de son extremite droite

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect56 = {664, 360, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect56);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect57 = {664, 380, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect57);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect58 = {664, 400, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect58);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect59 = {664, 420, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect59);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect60 = {664, 440, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect60);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect61 = {664, 460, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect61);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect62 = {664, 480, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect62);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect63 = {664, 500, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect63);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect64 = {664, 520, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect64);

    // passage des pietons de la route gauche
    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect26 = {400, 400, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect26);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect27 = {400, 420, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect27);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect28 = {400, 440, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect28);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect29 = {400, 460, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect29);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect30 = {400, 480, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect30);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect31 = {400, 500, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect31);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect32 = {400, 520, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect32);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect33 = {400, 380, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect33);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rect34 = {400, 360, 50, 10};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect34);

    // trait du trotoire droit

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rectxlux = {450, 540, 10, 49};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectxlux);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rectlrx = {560, 10, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectlrx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rectljx = {560, 50, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectljx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rectljtx = {560, 90, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectljtx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rectltjx = {560, 130, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectltjx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect rechtljx = {560, 170, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rechtljx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect raectljx = {560, 210, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &raectljx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect r = {560, 250, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &r);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect x = {560, 610, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &x);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect jx = {560, 650, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &jx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect ljx = {560, 690, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &ljx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect tljx = {560, 730, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &tljx);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect ctljx = {560, 770, 5, 30};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &ctljx);

    // rectangle trotoire de la route verticale droit
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rectpol = {416, 0, 53, 350};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectpol);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect1m = {416, 541, 53, 700};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect1m);
    // rectangle du trotoire de la route verticale du cot� droit
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rect1mt = {661, 545, 54, 700};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rect1mt);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_Rect rectLOL = {661, 0, 54, 300};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &rectLOL);

    // separation de la route horizontale

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx22 = {5, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx22);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx222 = {45, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx222);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx223 = {85, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx223);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx224 = {125, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx224);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx225 = {165, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx225);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx226 = {205, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx226);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx227 = {245, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx227);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx228 = {285, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx228);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx229 = {325, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx229);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx2l2 = {365, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx2l2);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx322 = {715, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx322);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx3322 = {755, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx3322);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx242 = {795, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx242);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx282 = {835, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx282);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx252 = {875, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx252);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx262 = {915, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx262);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx272 = {955, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx272);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx292 = {995, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx292);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx2232 = {1035, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx2232);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx2322 = {1075, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx2322);

    SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    SDL_Rect xxx2342 = {1115, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &xxx2342);

    SDL_Rect GO = {1155, 445, 30, 5};
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &GO);

    if (cadre1 == NULL)
    {
        fprintf(stderr, "erreur PARC : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    texture2 = SDL_CreateTextureFromSurface(renderer, cadre1);
    if (texture2 == NULL)
    {
        fprintf(stderr, "erreur texture : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    SDL_Rect parc;
    parc.x = 0;
    parc.y = 0;

    if (SDL_QueryTexture(texture2, NULL, NULL, &parc.w, &parc.h) != 0)
    {
        fprintf(stderr, "erreur query : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    parc.h = 300;
    parc.w = 420;

    if (SDL_RenderCopy(renderer, texture2, NULL, &parc) != 0)
    {
        fprintf(stderr, "erreur copy : %s", SDL_GetError());
        //  return EXIT_FAILURE;
    }

    // deuxieme image

    if (cadre2 == NULL)
    {
        fprintf(stderr, "erreur PARC : %s", SDL_GetError());
        //   return EXIT_FAILURE;
    }
    texture3 = SDL_CreateTextureFromSurface(renderer, cadre2);
    if (texture3 == NULL)
    {
        fprintf(stderr, "erreur texture : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }

    SDL_Rect maison;
    maison.x = 710;
    maison.y = 0;

    if (SDL_QueryTexture(texture3, NULL, NULL, &maison.w, &maison.h) != 0)
    {
        fprintf(stderr, "erreur query : %s", SDL_GetError());
        //  return EXIT_FAILURE;
    }
    maison.h = 300;
    maison.w = 490;

    if (SDL_RenderCopy(renderer, texture3, NULL, &maison) != 0)
    {
        fprintf(stderr, "erreur copy : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }

    if (cadre3 == NULL)
    {
        fprintf(stderr, "erreur PARC : %s", SDL_GetError());
        //  return EXIT_FAILURE;
    }
    texture4 = SDL_CreateTextureFromSurface(renderer, cadre3);
    if (texture4 == NULL)
    {
        fprintf(stderr, "erreur texture : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    SDL_Rect arbuste;
    arbuste.x = -30;
    arbuste.y = 591;

    if (SDL_QueryTexture(texture4, NULL, NULL, &arbuste.w, &arbuste.h) != 0)
    {
        fprintf(stderr, "erreur query : %s", SDL_GetError());
        //  return EXIT_FAILURE;
    }
    arbuste.h = 250;
    arbuste.w = 450;

    if (SDL_RenderCopy(renderer, texture4, NULL, &arbuste) != 0)
    {
        fprintf(stderr, "erreur copy : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }

    // quatrieme image

    if (cadre4 == NULL)
    {
        fprintf(stderr, "erreur PARC : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    texture5 = SDL_CreateTextureFromSurface(renderer, cadre4);
    if (texture5 == NULL)
    {
        fprintf(stderr, "erreur texture : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }
    SDL_Rect hospital;
    hospital.x = 710;
    hospital.y = 590;

    if (SDL_QueryTexture(texture5, NULL, NULL, &hospital.w, &hospital.h) != 0)
    {
        fprintf(stderr, "erreur query : %s", SDL_GetError());
        //   return EXIT_FAILURE;
    }
    hospital.h = 210;
    hospital.w = 490;

    if (SDL_RenderCopy(renderer, texture5, NULL, &hospital) != 0)
    {
        fprintf(stderr, "erreur copy : %s", SDL_GetError());
        // return EXIT_FAILURE;
    }

    // // grand feu 1
    // SDL_Rect dff = {441, 261, 30, 90};
    // SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    // SDL_RenderFillRect(renderer, &dff);

    // // grand feu 2
    // SDL_Rect bfbf = {441, 540, 30, 90};
    // SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    // SDL_RenderFillRect(renderer, &bfbf);

    // // grand feu 3
    // SDL_Rect bfba = {660, 540, 30, 90};
    // SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    // SDL_RenderFillRect(renderer, &bfba);

    // // grand feu 4
    // SDL_Rect bfbp = {660, 261, 30, 90};
    // SDL_SetRenderDrawColor(renderer, 173, 173, 173, 255);
    // SDL_RenderFillRect(renderer, &bfbp);

    SDL_RenderPresent(renderer);
    // SDL_FreeSurface(surface);
    // SDL_FreeSurface(cadre1);
    // SDL_FreeSurface(cadre2);
    // SDL_FreeSurface(cadre3);
    // SDL_FreeSurface(cadre4);
    // SDL_DestroyTexture(texture2);
    // SDL_DestroyTexture(texture3);
    // SDL_DestroyTexture(texture4);
    // SDL_DestroyTexture(texture5);
}
