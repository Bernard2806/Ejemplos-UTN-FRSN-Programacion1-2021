#include <stdio.h>
#include <string.h>

// Definición de la estructura Books que representa un libro
struct Books
{
   char title[50];    // Título del libro
   char author[50];   // Autor del libro
   char subject[100]; // Tema o descripción
   int book_id;       // ID del libro
};

/* Declaración de función que recibe un puntero a Books y muestra su información */
void printLibro(struct Books *book);

int main()
{
   // Declaración de dos variables de tipo struct Books
   struct Books Book1;
   struct Books Book2;

   // Inicialización de los datos para Book1
   strcpy(Book1.title, "C Programming");
   strcpy(Book1.author, "Nuha Ali");
   strcpy(Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   // Inicialización de los datos para Book2
   strcpy(Book2.title, "Telecom Billing");
   strcpy(Book2.author, "Zara Ali");
   strcpy(Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;

   // Imprime la información de Book1 pasando la dirección de memoria de Book1
   printLibro(&Book1);

   // Imprime la información de Book2 pasando la dirección de memoria de Book2
   printLibro(&Book2);

   return 0;
}

// Función que recibe un puntero a un struct Books e imprime su contenido
void printLibro(struct Books *book)
{
   printf("Book title : %s\n", book->title);
   printf("Book author : %s\n", book->author);
   printf("Book subject : %s\n", book->subject);
   printf("Book book_id : %d\n", book->book_id);
}