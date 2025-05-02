#include <stdio.h>
#define M 100
typedef 
struct {
    int 
    e[M], t;

} Pila;

void 
ini(Pila *p) { p->t = -1; }
int 
vacia(Pila *p) { return p->t == -1; }
void 
push(Pila *p, int v) { if (p->t < M - 1) p->e[++p->t] = v; }
void 
pop(Pila *p) { if (!vacia(p)) p->t--; }
void 
tope(Pila *p) { printf(vacia(p) ? "Vacia\n" : "%d\n", p->e[p->t]); }

void 
menu() {
    Pila 
    p; 
    ini(&p);
    int 
    o, v;
    do {
        puts
        ("1.Agregar\n"); 
        puts
        ("2.Sacar\n");
        puts
        ("3.Tope\n"); 
        puts
        ("4.Vacia\n"); 
        puts
        ("5.Salir\n");
        scanf
        ("%d", &o);
        if (o == 1) {
            printf
            ("Ingresa 0 para parar:\n");
            while
            (scanf("%d", &v) && v != 0) 
            push(&p, v);
        }
        else if 
        (o == 2) pop(&p);
        else if 
        (o == 3) tope(&p);
        else if 
        (o == 4) 
        printf(vacia(&p) ? "Si\n" : "No\n");
    } while
    (o != 5);
}

int 
main() { 
    menu
    (); 
return 0; 
}