/* Hello World (Hola Mundo)
* Joho Braian Matias
* 04/04/2015
*/

#include<stdio.h>
int main(){
		FILE* miarchivo=NULL;
		char* nombrearchivo="salida.txt";
	    miarchivo= fopen(nombrearchivo,"w");
		
		fprintf(miarchivo,"Hello Word");
		fclose(miarchivo);
		return 0;
}
