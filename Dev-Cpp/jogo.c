#include <allegro.h>



int main() {
    allegro_init();//inicializando a biblioteca allegro
    install_keyboard();//pegar valores do teclado
    set_color_depth(32);//chamando função de cores 
    set_gfx_mode(GFX_AUTODETECT,640,480,0,0);//DEFININDO RESOLUÇÃO de video
    PALLETTE pal;//variavel tipo PALLETTE
    BITMAP *img = load_bitmap("C:\Users\Anderson Silva\Pictures\dengue.bmp",pal);//ponteiro carregando imagem
    draw_sprite(screen,img,30,80);//função pa imprimir imagem

    while(!key[KEY_ESC]){
    clear_bitmap(img); //limpa ponteiro                    
    textout(screen, font,"texto",1,1,makecol(250,0,0));//esse comando é para imprimir um texto
    draw_sprite(screen,img,30,30);//função para imprimir imagem
};
return 0;//sai da função main
}
END_OF_MAIN()//FINALIZA A EXCUÇÃO DO ALLEGRO

	
