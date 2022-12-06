typedef struct lista Lista;

Lista* cria_lista();
Lista *inserir_inicio(Lista *l, int valor);
void imprime(Lista *l);
Lista *remover(Lista *l, int valor);