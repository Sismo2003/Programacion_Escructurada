#include <stdio.h>
#include <string.h>

struct generales
{
};
struct datos_personales
{
	char nombre[30];
};
struct negocio
{
	struct generales n;
};
struct vivienda
{
	struct generales g;
};
struct carro
{
	int anio;
};
struct vida
{
	struct datos_personales dp;
};
union tipo
{
	struct negocio n;
	struct vivienda v;
	struct carro c;
	struct vida vid;
};
struct poliza
{
	int folio;
	union  tipo t;
	struct datos_personales dp;
	float cobertura;
	char vigencia[50];
	float costo;
	float prima;
};

void agregar(struct poliza *p, int *i)
{
	printf("Aqui %p",&i);
	p[*i].cobertura;
	p[*i].vigencia[0];
	p[*i].costo;
	p[*i].prima=33;
	
	p[*i].t.c.anio=123;
	i++;
}
void eliminar(struct poliza *p, int *i)
{
	//pedir el folio dato
	//leerlo
	int folio, pos;
	pos=busqueda_binaria(p,0,10,folio);
	if(pos==-1)
	//imprimir que el elemento no esta
	else
	{
		for(pos;pos<i;pos++)
		{
			p[pos].cobertura=p[pos+1].cobertura;
		}
		(*i)--;
	}
}
int busqueda_binaria(struct poliza *p, int inicio, int fin, int bus)
{
	int mitad=(inicio+fin)/2;
	if(bus==p[mitad].folio)
	return mitad;
	else if(bus<p[mitad].folio)
	busqueda_binaria(p,mitad+1,fin,bus);
	else if(bus>p[mitad].folio)
	busqueda_binaria(p,inicio,mitad-1,bus);
	else
	return -1;
}
void menu(struct poliza *po, int *it)
{
	int opcion;
	int salir=0;
	while(!salir)
	{
		//imprimir el menu de opciones
		//leer la opcion en la variable opcion
		switch(opcion)
		{
			case 1:agregar(po,&it);
			case 2://eliminar
			case 3://Buscar
			case 4://editar
			case 5://Mostrar todo
			case 6://ordenar
			case 7:salir=1;
			default: //imprimir opcion no valida
				break;
		}
	}
}

int main()
{
	struct poliza p[10];
	int tamanio=10;
	int i=0;
	printf("Hola");
	menu(p,&i);
	//p.t.c.anio=2021;
	
}
