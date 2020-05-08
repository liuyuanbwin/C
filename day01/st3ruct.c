/*
 * @Description: struct     
 * @Version: 
 * @Author: liu
 * @Date: 2020-05-06 13:17:56
 */

#include <stdio.h>
#include <string.h>

struct Book 
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"C", "RUNOOB", "sss", 123456};

void printBook(struct Book book){
     printf("printBook *** book title %s author %s subject %s id %d", book.title, book.author, book.subject, book.book_id);
}

void printBookPointer(struct Book *book){
     printf("printBook >>> book title %s author %s subject %s id %d", book->title, book->author, book->subject, book->book_id);
}

int main(){

    struct Book book1;
    struct Book book2;

    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 8998;

    printBook(book1);
    printBookPointer(&book1);

    return 0;
}

