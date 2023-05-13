#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include<SDL2/SDL_mixer.h>
#include<SDL2/SDL_image.h>

struct carre{
SDL_Rect rect;
Uint32 couleur;
};
int main(int argc, char *argv[])
{
SDL_Window *window = NULL;
SDL_Surface*surface,*cadre1,*cadre2,*cadre3,*cadre4=NULL;
SDL_Texture *texture = NULL,*texture2=NULL,*texture3= NULL,*texture4=NULL,*texture5=NULL;
size_t G;
SDL_Renderer *renderer = NULL;

int statut = EXIT_FAILURE;

SDL_Color vert = {0,255,0,255};

int RenderFillRect(SDL_Renderer* renderer,const SDL_Rect* rect);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
int SDL_RendererDrawPoint(SDL_Renderer* renderer, const SDL_Point* points, int x,int y);
int SDL_RenderDRawPoint(SDL_Renderer* renderer,const SDL_Point* points,  int     x,
                                                                         int     y);

int SDL_RenderCopy(SDL_Renderer* renderer,SDL_Texture* texture, const SDL_Rect* srcrect, const SDL_Rect* dstrect);

if(0 != SDL_Init(SDL_INIT_VIDEO))
{
    fprintf(stderr,"erreur SDL_Init : %s", SDL_GetError());
    return EXIT_FAILURE;
}
window = SDL_CreateWindow("feux de carrefour", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_UNDEFINED,
                          1200,800, 0);
  surface= SDL_CreateRGBSurface(0,32,32,32,0,0,0,0);
if(NULL== window)
{
    fprintf(stderr,"Erreur SDL_CreateWindow: %s", SDL_GetError());
    return EXIT_FAILURE;
}
renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
if(NULL == renderer )
{
    fprintf(stderr,"Erreur SDL_CreateRenderer : %s",SDL_GetError());

}






if(0 != SDL_SetRenderDrawColor(renderer,vert.r,vert.g,vert.b,vert.a))
{
    fprintf(stderr,"Erreur SDL_SetRenderDrawColor : %s", SDL_GetError());

}
if(0 != SDL_RenderClear(renderer))
{
    fprintf(stderr, "Erreur SDL_SetRenderDrawColor :%s",SDL_GetError());

}



texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET,300,300);


if(NULL == texture)

    fprintf(stderr, "Erreur SDL_CreateTexture: %s", SDL_GetError());



/*on cr�� 4 carr�s pour notre feu*/
struct carre carre[4] = {

         {{4,4,10,10},SDL_MapRGB(surface->format,0,0,0)},/*NOIR*/
        {{4,18,10,10},SDL_MapRGB(surface->format,255,0,0)},/*bleu*/
        {{18,4,10,10},SDL_MapRGB(surface->format,0,255,0)},/*vert*/
         {{18,18,10,10},SDL_MapRGB(surface->format,255,127,40)},/*blanc*/
};
//on remplit notre surface grace a nos carres
for(G =0;G<4;G++){
    SDL_FillRect(surface,&carre[G].rect,carre[G].couleur);
    SDL_SetWindowIcon(window,surface);
}
//innitialisation de SDL_image:
if(IMG_Init(IMG_INIT_PNG)<0){
    printf("ERReur lors de l'initialisation de SDL_image:%s\n",IMG_GetError());
    return 1;
}
//chargement de l'image avec sdl_image:
SDL_Surface*image=
IMG_Load("nom.png");
if (!image){
    printf("Erreur lors du chargement de l'image:%s\n", IMG_GetError());
    return 1;
}

//partie musique


Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2048);


SDL_RenderPresent(renderer);
Mix_Music *son1;
son1=Mix_LoadMUS("son/son.mp3");

Mix_PlayMusic(son1,-1);//lecture du son
//---------------------------------------------------------------------------------------------------------------------------------------------------------
SDL_Rect rect={0,350,1200,190};
SDL_SetRenderDrawColor(renderer,130,130,130,255);
SDL_RenderFillRect(renderer,&rect);

SDL_RenderPresent(renderer);

SDL_Point point[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);

size_t i=0;
for(i=0;i<=1200;i++){
point[i].x = i;
point[i].y = 350;
}
SDL_RenderDrawPoints(renderer,point,1200);

SDL_Point point2[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);

size_t j=0;
for(j=0;j<=1200;j++){
point2[j].x= j;
point2[j].y = 540;

}
/*SDL_RenderDrawPoints(renderer,point2,1200);*/
SDL_RenderPresent(renderer);

SDL_Point point3[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t s=0;
for(s=0;s<=350;s++){
point2[s].x= 469;
point2[s].y = s;

}

SDL_RenderDrawPoints(renderer,point2,1200);
SDL_RenderPresent(renderer);

SDL_Point point4[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t v=0;
for(v=0;v<=350;v++){
point4[v].x= 660;
point4[v].y = v;

}
SDL_RenderDrawPoints(renderer,point4,1200);
SDL_RenderPresent(renderer);


SDL_Point point5[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t w=541;
for(w=541;w<=800;w++){
point5[w].x= 469;
point5[w].y = w;

}

SDL_RenderDrawPoints(renderer,point5,1200);
SDL_RenderPresent(renderer);

SDL_Point point6[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t z=541;
for(z=541;z<=800;z++){
point6[z].x=660;
point6[z].y = z;

}
SDL_RenderDrawPoints(renderer,point6,1200);
SDL_RenderPresent(renderer);

 SDL_Point point7[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t l=0;
for(l=0;l<=600;l++){
point7[l].x=l;
point7[l].y = 300;

}
//ligne du trotoire droit
SDL_RenderDrawPoints(renderer,point7,1200);
SDL_RenderPresent(renderer);

SDL_Point point8[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t m=650;
for(m=650;m<=1200;m++){
point8[m].x=m;
point8[m].y = 300;

}

SDL_RenderDrawPoints(renderer,point8,1200);
SDL_RenderPresent(renderer);

//ligne du trotoire droit dessous

SDL_Point point9[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t d=650;
for(d=650;d<=1200;d++){
point9[d].x=d;
point9[d].y=590;

}

SDL_RenderDrawPoints(renderer,point9,1200);
SDL_RenderPresent(renderer);
//ligne du trotoir du bas

SDL_Point point10[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t g=0;
for(g=0;g<=600;g++){
point10[g].x=g;
point10[g].y =590;

}

SDL_RenderDrawPoints(renderer,point10,1200);
SDL_RenderPresent(renderer);
//ligne du trotoire du bas a gauche
SDL_Point point11[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t k=543;
for(k=541;k<=1200;k++){
point11[k].x=415;
point11[k].y = k;

}

SDL_RenderDrawPoints(renderer,point11,1200);
SDL_RenderPresent(renderer);


SDL_Point point12[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t h=543;
for(h=541;h<=1200;h++){
point12[h].x=715;
point12[h].y = h;

}

SDL_RenderDrawPoints(renderer,point12,1200);
SDL_RenderPresent(renderer);
//ligne gauche  de la route en haut
SDL_Point point13[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t p=0;
for(p=0;p<=300;p++){
point13[p].x=415;
point13[p].y = p;

}

SDL_RenderDrawPoints(renderer,point13,1200);
SDL_RenderPresent(renderer);
//ligne droite de la route en haut
SDL_Point point14[1200];
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderPresent(renderer);
size_t a=0;
for(a=0;a<=300;a++){
point14[a].x=715;
point14[a].y = a;

}

SDL_RenderDrawPoints(renderer,point14,1200);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rect1={470,0,190,800};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,130,130,130,255);
SDL_RenderFillRect(renderer,&rect1);
SDL_RenderPresent(renderer);
//rectangle du trotoire de la route gauche
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect2={0,301,469,49};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect2);
SDL_RenderPresent(renderer);
//trotoire de la route droit
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect3={250,300,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect3);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rectm={0,541,469,49};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectm);
SDL_RenderPresent(renderer);
//rectangle du trotoire de la route droite

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rects={661,541,1200,49};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rects);
SDL_RenderPresent(renderer);
//trotoire de la route droite

//trotoire2 droit
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rect65={661,301,1200,49};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect65);
SDL_RenderPresent(renderer);
//fin trotoire


//passage pieton du haut
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect35={480,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect35);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect36={500,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect36);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect37={520,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect37);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect38={540,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect38);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect39={560,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect39);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect40={580,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect40);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect41={600,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect41);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect42={620,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect42);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect43={640,290,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect43);
SDL_RenderPresent(renderer);
//passage pieton du bas de la route horizontale

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect45={480,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect45);
SDL_RenderPresent(renderer);




SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect47={500,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect47);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect48={520,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect48);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect49={540,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect49);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect50={560,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect50);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect51={580,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect51);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect52={600,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect52);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect53={620,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect53);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect54={640,550,10,50};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect54);
SDL_RenderPresent(renderer);
//route des pietons de la route de son extremite droite

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect56={664,360,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect56);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect57={664,380,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect57);
SDL_RenderPresent(renderer);



SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect58={664,400,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect58);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect59={664,420,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect59);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect60={664,440,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect60);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect61={664,460,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect61);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect62={664,480,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect62);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect63={664,500,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect63);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect64={664,520,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect64);
SDL_RenderPresent(renderer);


//passage des pietons de la route gauche
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect26={400,400,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect26);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect27={400,420,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect27);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect28={400,440,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect28);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect29={400,460,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect29);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect30={400,480,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect30);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect31={400,500,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect31);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect32={400,520,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect32);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect33={400,380,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect33);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rect34={400,360,50,10};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect34);
SDL_RenderPresent(renderer);

//trait du trotoire droit



SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rectxlux={450,540,10,49};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectxlux);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rectlrx={560,10,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectlrx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rectljx={560,50,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectljx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rectljtx={560,90,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectljtx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rectltjx={560,130,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectltjx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect rechtljx={560,170,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rechtljx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect raectljx={560,210,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&raectljx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect r={560,250,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&r);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect x={560,610,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&x);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect jx={560,650,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&jx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect ljx={560,690,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&ljx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect tljx={560,730,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&tljx);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect ctljx={560,770,5,30};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&ctljx);
SDL_RenderPresent(renderer);

// rectangle trotoire de la route verticale droit
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rectpol={416,0,53,350};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectpol);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rect1m={416,541,53,700};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect1m);
SDL_RenderPresent(renderer);
//rectangle du trotoire de la route verticale du cot� droit
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rect1mt={661,545,54,700};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rect1mt);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rectLOL={661,0,54,300};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&rectLOL);
SDL_RenderPresent(renderer);

// separation de la route horizontale


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx22={5,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx22);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx222={45,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx222);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx223={85,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx223);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx224={125,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx224);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx225={165,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx225);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx226={205,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx226);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx227={245,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx227);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx228={285,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx228);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx229={325,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx229);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx2l2={365,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx2l2);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx322={715,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx322);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx3322={755,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx3322);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx242={795,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx242);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx282={835,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx282);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx252={875,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx252);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx262={915,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx262);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx272={955,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx272);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx292={995,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx292);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx2232={1035,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx2232);
SDL_RenderPresent(renderer);


SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx2322={1075,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx2322);
SDL_RenderPresent(renderer);

SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_Rect xxx2342={1115,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&xxx2342);
SDL_RenderPresent(renderer);

SDL_Rect GO={1155,445,30,5};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_RenderFillRect(renderer,&GO);

SDL_RenderPresent(renderer);




/*******************************************************************************************************************************************/

    cadre1=SDL_LoadBMP("image/PARC.bmp");
    if(cadre1==NULL)
{
    fprintf(stderr,"erreur PARC : %s", SDL_GetError());
    return EXIT_FAILURE;
}
texture2=SDL_CreateTextureFromSurface(renderer,cadre1);
if(texture2== NULL)
{
    fprintf(stderr,"erreur texture : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_Rect parc;
parc.x=0;
parc.y=0;

if(SDL_QueryTexture(texture2,NULL,NULL,&parc.w,&parc.h)!=0){
         fprintf(stderr,"erreur query : %s", SDL_GetError());
    return EXIT_FAILURE;

}
parc.h=300;
parc.w=420;

if(SDL_RenderCopy(renderer,texture2,NULL,&parc)!=0)
{
     fprintf(stderr,"erreur copy : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_RenderPresent(renderer);

//deuxieme image


 cadre2=SDL_LoadBMP("image/maison2.bmp");
    if(cadre2==NULL)
{
    fprintf(stderr,"erreur PARC : %s", SDL_GetError());
    return EXIT_FAILURE;
}
texture3=SDL_CreateTextureFromSurface(renderer,cadre2);
if(texture3== NULL)
{
    fprintf(stderr,"erreur texture : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_Rect maison;
maison.x=710;
maison.y=0;
SDL_RenderPresent(renderer);




if(SDL_QueryTexture(texture3,NULL,NULL,&maison.w,&maison.h)!=0){
         fprintf(stderr,"erreur query : %s", SDL_GetError());
    return EXIT_FAILURE;

}
maison.h=300;
maison.w=490;

if(SDL_RenderCopy(renderer,texture3,NULL,&maison)!=0)
{
     fprintf(stderr,"erreur copy : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_RenderPresent(renderer);






cadre3=SDL_LoadBMP("image/arbre.bmp");
    if(cadre3==NULL)
{
    fprintf(stderr,"erreur PARC : %s", SDL_GetError());
    return EXIT_FAILURE;
}
texture4=SDL_CreateTextureFromSurface(renderer,cadre3);
if(texture4== NULL)
{
    fprintf(stderr,"erreur texture : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_Rect arbuste;
arbuste.x=-30;
arbuste.y=591;
SDL_RenderPresent(renderer);




if(SDL_QueryTexture(texture4,NULL,NULL,&arbuste.w,&arbuste.h)!=0){
         fprintf(stderr,"erreur query : %s", SDL_GetError());
    return EXIT_FAILURE;

}
arbuste.h=250;
arbuste.w=450;

if(SDL_RenderCopy(renderer,texture4,NULL,&arbuste)!=0)
{
     fprintf(stderr,"erreur copy : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_RenderPresent(renderer);



//quatrieme image




cadre4=SDL_LoadBMP("image/hopit.bmp");
    if(cadre4==NULL)
{
    fprintf(stderr,"erreur PARC : %s", SDL_GetError());
    return EXIT_FAILURE;
}
texture5=SDL_CreateTextureFromSurface(renderer,cadre4);
if(texture5== NULL)
{
    fprintf(stderr,"erreur texture : %s", SDL_GetError());
    return EXIT_FAILURE;
}
SDL_Rect hospital;
hospital.x=710;
hospital.y=590;
SDL_RenderPresent(renderer);




if(SDL_QueryTexture(texture5,NULL,NULL,&hospital.w,&hospital.h)!=0){
         fprintf(stderr,"erreur query : %s", SDL_GetError());
    return EXIT_FAILURE;

}
hospital.h=210;
hospital.w=490;

if(SDL_RenderCopy(renderer,texture5,NULL,&hospital)!=0)
{
     fprintf(stderr,"erreur copy : %s", SDL_GetError());
    return EXIT_FAILURE;
}

SDL_RenderPresent(renderer);


    SDL_RenderPresent(renderer);


// grand feu 1
SDL_Rect dff={441,261,30,90};
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&dff);

// grand feu 2
SDL_Rect bfbf={441,540,30,90};
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_RenderFillRect(renderer,&bfbf);

// grand feu 3
SDL_Rect bfba={660,540,30,90};
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_RenderFillRect(renderer,&bfba);

// grand feu 4
SDL_Rect bfbp={660,261,30,90};
SDL_SetRenderDrawColor(renderer,173,173,173,255);
SDL_RenderFillRect(renderer,&bfbp);

SDL_RenderPresent(renderer);







int ji=0;
for(ji=0;ji<50;ji++){
    //feu vert1
SDL_Rect pt1={443,265,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,255,0,255);
SDL_RenderFillRect(renderer,&pt1);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//feu vert2
SDL_Rect pt111={662,540,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,255,0,255);
SDL_RenderFillRect(renderer,&pt111);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu vert 3
SDL_Rect pt2222={662,325,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,0,0,255);
SDL_RenderFillRect(renderer,&pt2222);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu vert 4
SDL_Rect pt2222d={443,601,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,0,0,255);
SDL_RenderFillRect(renderer,&pt2222d);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);


SDL_Delay(500);
//vert sombre1
SDL_Rect pt11={443,265,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt11);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//vert sombre 3
SDL_Rect pt22221={662,325,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt22221);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu vert sombre 4
SDL_Rect pt2222dd={443,601,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt2222dd);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);


//feu vert sombre2
SDL_Rect pt1111={662,540,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt1111);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//feu orange1
SDL_Rect pt3={443,290,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt3);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//orange2
SDL_Rect pt345={662,560,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt345);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//orange 3
SDL_Rect pt3453111={662,298,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt3453111);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu orange 4
SDL_Rect pt3453111bb={443,570,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt3453111bb);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);


SDL_Delay(200);

//feu orange 4 sombre
SDL_Rect ptto={443,570,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&ptto);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

SDL_Rect pt33={443,290,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt33);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//orange 2 sombre
SDL_Rect pt3455={662,560,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt3455);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//orange 3 sombre

SDL_Rect pt3332={662,298,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt3332);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);









//feu rouge1
SDL_Rect pt2={443,320,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,0,0,255);
SDL_RenderFillRect(renderer,&pt2);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu rouge 2
SDL_Rect pt222={662,590,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,0,0,255);
SDL_RenderFillRect(renderer,&pt222);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu rouge3
SDL_Rect pt1m1={662,268,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,255,0,255);
SDL_RenderFillRect(renderer,&pt1m1);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//feu rouge4
SDL_Rect pt1m1n={443,548,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,255,0,255);
SDL_RenderFillRect(renderer,&pt1m1n);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);




SDL_Delay(500);
SDL_Rect pt22={443,320,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt22);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu rouge3 sombre
SDL_Rect pt11m1={662,268,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt11m1);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu rouge sombre 4
SDL_Rect pt11m1zz={443,548,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt11m1zz);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);



//feu rouge sombre
SDL_Rect pt221={662,590,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt221);


SDL_Delay(200);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//feu orange1
SDL_Rect pt34={443,290,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt34);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);
//feu orange 2
SDL_Rect pt344={662,560,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt344);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//orange 3

SDL_Rect pt33323={662,298,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,130,40,255);
SDL_RenderFillRect(renderer,&pt33323);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);


//feu orange 4
SDL_Rect pt3453111bb2={443,570,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,255,127,40,255);
SDL_RenderFillRect(renderer,&pt3453111bb2);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);


SDL_Delay(500);
SDL_Rect pt341={443,290,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt341);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);


SDL_Rect pt3411={662,560,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt3411);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//orange 3 sombre

SDL_Rect pt333233={662,298,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt333233);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

//feu orange 4 sombre
SDL_Rect pt3453111bbbb={443,570,25,25};
SDL_RenderPresent(renderer);
SDL_SetRenderDrawColor(renderer,0,0,0,255);
SDL_RenderFillRect(renderer,&pt3453111bbbb);
SDL_RenderPresent(renderer);
SDL_RenderPresent(renderer);

}








SDL_bool u= SDL_TRUE;
while(u)
{
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {



SDL_RenderPresent(renderer);
        switch(event.type)
        {
        case SDL_QUIT:
            u=SDL_FALSE;
            break;
        default:
            break;
        }
    }
}
SDL_Quit();
return EXIT_SUCCESS;






}

