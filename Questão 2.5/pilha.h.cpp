#include <stdio.h>
#include <stdlib.h>

Pilha pilha(int m) {                            

    Pilha P = malloc(sizeof(struct pilha));     
    P->max = m;                                 
    P->topo = -1;                               
    P->item = malloc(m*sizeof(Itemp));          

    return P;
}


int empty(Pilha P) {                            

    if (P->topo == -1) {                        
        return 1;                               
    } else {
        return 0;                               
    }

}


int full(Pilha P) {                             
    if( P->topo == P->max-1 ) {                 
        return 1;                               
    } else {
        return 0;                               
    }

}


void push(Itemp x, Pilha P) {                            

    if (full(P)) {                                       
        puts("Pilha cheia!");                            
        abort();                                         
    } else {                                             
        P->topo++;                                      
        P->item[P->topo] = x;                           
    }                                                   
}


Itemp pop(Pilha P) {                           

    if (empty(P)) {                             
        puts("Pilha vazia!");                   
        abort();                                
    }   else {                                 
        Itemp x = P->item[P->topo];             
        P->topo--;                              
        return x;                               
    }

}


Itemp getTop(Pilha P) {                         

    if (empty(P)) {                             
        puts ("Pilha vazia!");                   
        abort();                                
    }   else {                                  
        return P->item[P->topo];                
    }

}


void destroy(Pilha *P) {

    free((*P)->item);
    free(*P);
    *P = NULL;

}