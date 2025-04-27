#include <stdio.h>
#include <string.h>

enum categoriasvertebras {
    vertebrado, invertebrado
};

enum categoriaclasses{
    ave, mamifero, inseto, anelideo
};

enum categoriaalimentacao{
    carnivoro, onivoro, herbivoro, hematofago
};

struct caracteristicas{
    enum categoriasvertebras vertebras;
    enum categoriaclasses classes;
    enum categoriaalimentacao alimentacao;
    
}typedef caracteristicas;


int main (){
    
    caracteristicas aguia = {vertebrado, ave, carnivoro};
    caracteristicas pomba = {vertebrado, ave, onivoro};
    caracteristicas homem = {vertebrado, mamifero, onivoro};
    caracteristicas vaca = {vertebrado, mamifero, herbivoro};
    caracteristicas pulga = {invertebrado, inseto, hematofago};
    caracteristicas largata = {invertebrado, inseto, herbivoro};
    caracteristicas sanguessuga = {invertebrado, anelideo, hematofago};
    caracteristicas minhoca = {invertebrado, anelideo, onivoro};
    struct caracteristicas animal;
    
    char palavra1[40];
    char palavra2[40];
    char palavra3[40];
    
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn (palavra1, "\n")]= '\0';
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn (palavra2, "\n")]= '\0';
    fgets(palavra3, sizeof(palavra3), stdin);
    palavra3[strcspn (palavra3, "\n")]= '\0';
    
    if (strcmp (palavra1, "vertebrado")==0){
        animal.vertebras = vertebrado;
    }else {
        animal.vertebras = invertebrado;
    }
    
    if (strcmp (palavra2, "ave")==0){
        animal.classes = ave;
    }else if (strcmp (palavra2, "mamifero")==0){
        animal.classes = mamifero;
    } else if (strcmp (palavra2, "inseto")==0){
        animal.classes = inseto;
    } else {
        animal.classes = anelideo;
    }
    
    if (strcmp (palavra3, "carnivoro")==0){
        animal.alimentacao= carnivoro;
    }else if (strcmp (palavra3, "onivoro")==0){
        animal.alimentacao= onivoro;
    }else if (strcmp (palavra3, "herbivoro")==0){
        animal.alimentacao= herbivoro;
    }else if (strcmp (palavra3, "hematofago")==0){
        animal.alimentacao= hematofago;
    }
    
    
    if (animal.vertebras == aguia.vertebras &&
        animal.classes == aguia.classes &&
        animal.alimentacao == aguia.alimentacao){
            printf ("aguia\n");
    }
    
    if (animal.vertebras == pomba.vertebras &&
        animal.classes == pomba.classes &&
        animal.alimentacao == pomba.alimentacao){
            printf ("pomba\n");
    }
    if (animal.vertebras == homem.vertebras &&
        animal.classes == homem.classes &&
        animal.alimentacao == homem.alimentacao){
            printf ("homem\n");
    }
    if (animal.vertebras == vaca.vertebras &&
        animal.classes == vaca.classes &&
        animal.alimentacao == vaca.alimentacao){
            printf ("vaca\n");
    }
    if (animal.vertebras == pulga.vertebras &&
        animal.classes == pulga.classes &&
        animal.alimentacao == pulga.alimentacao){
            printf ("pulga\n");
    }
    if (animal.vertebras == largata.vertebras &&
        animal.classes == largata.classes &&
        animal.alimentacao == largata.alimentacao){
            printf ("lagarta\n");
    }
    if (animal.vertebras == sanguessuga.vertebras &&
        animal.classes == sanguessuga.classes &&
        animal.alimentacao == sanguessuga.alimentacao){
            printf ("sanguessuga\n");
    }
    if (animal.vertebras == minhoca.vertebras &&
        animal.classes == minhoca.classes &&
        animal.alimentacao == minhoca.alimentacao){
            printf ("minhoca\n");
    }
    return 0;
}
    
    
    
    
    
    