#include <stdio.h>
#include <string.h>


struct generales{
	char direccion[20];
	char tipo[10];
	int suma_asegurada;

};


struct datos_personales{
	char nombre[30];
	int edad;
	char curp[20];
};


struct negocio{
	struct generales g;
	int ingresos;
	int empleados;
	char caracteristicas[30];
	char nombre_empresa[10];
	char num_fiscal[20];
	int valor_equipo;
	int suma_asegurada;
};


struct vivienda{
	struct generales g;
	char propietario[20];
	char tamano[10];
	int antiguedad;
	char estado_vivienda[15];
};


struct carro{
	char marca[10];
	char modelo[10];
	char matricula[10];
	char serie[10];
	int valor;
	int num_propietarios;
	int kilometraje;
	char tipo_combustible[10];
	char transmision[10];
	int anio;
};


struct vida{
	struct datos_personales dp;
	int ingresos;
	char sangre[5];
	char alergias[30];
	int altura;
	char diabetes[10];
	int peso;
	char cardiopatias[20];
	int suma_asegurada;
	int tasa_mortalidad;
};


union tipo{
	struct negocio n;
	struct vivienda v;
	struct carro c;
	struct vida vid;
};
struct poliza{
	union  tipo t;
	//struct datos_personales dp;
	float cobertura;
	char vigencia[50];
	float costo;
	float prima;
};







void menu(struct poliza *p, int *i){
	//int &p[*i] = 100;
	printf("------BIENVENIDO A ESTA HUMILDE EMPRESA DE SEGUROS------");
	int x;
	printf("Contamos con estos servicios:\n1. Vida\n2. Vivienda\n3. Vehiculo\n4. Negocio\n\n Digite la opcion deseada: ");
	scanf("%d", &x);
	switch (x){
	struct poliza ;
	case 1:
		printf("Digite la cobertura: ");
		scanf("%f", &p[*i].cobertura);
		printf("Digite la vigencia: ");
		scanf("%s", &p[*i].vigencia);
		printf("Digite el costo: ");
		scanf("%f", &p[*i].costo);
		printf("Digite la prima: ");
		scanf("%f", &p[*i].prima);
		printf("Digite el nombre: ");
		scanf("%s" , &p[*i].t.vid.dp.nombre);
		printf("Digite digite la edad: ");
		scanf("%d", &p[*i].t.vid.dp.edad);
		printf("Digite las alergias: ");
		scanf("%s", &p[*i].t.vid.alergias);
		printf("Digite la altura: ");
		scanf("%d", &p[*i].t.vid.altura);
		printf("Digite las cardiopatias: ");
		scanf("%s", &p[*i].t.vid.cardiopatias);
		printf("Digite el tipo de diabetes: ");
		scanf("%s", &p[*i].t.vid.diabetes);
		printf("Digite los ingresos: ");
		scanf("%d", &p[*i].t.vid.ingresos);
		printf("Digite el peso: ");
		scanf("%d", &p[*i].t.vid.peso);
		printf("Digite el tipo de sangre: ");
		scanf("%s", &p[*i].t.vid.sangre);
		printf("Digite la suma asegurada: ");
		scanf("%d", &p[*i].t.vid.suma_asegurada);
		printf("Digite la taza de mortalidad: ");
		scanf("%d", &p[*i].t.vid.tasa_mortalidad);
		break;

	case2:
		printf("Digite la cobertura: ");
		scanf("%f", &p[*i].cobertura);
		printf("Digite la vigencia: ");
		scanf("%s", &p[*i].vigencia);
		printf("Digite el costo: ");
		scanf("%f", &p[*i].costo);
		printf("Digite la prima: ");
		scanf("%f", &p[*i].prima);
		printf("Digite la direccion: ");
		scanf("%s", &p[*i].t.v.g.direccion);
		printf("Digite la suma asegurada: ");
		scanf("%d", &p[*i].t.v.g.suma_asegurada);
		printf("Digite el tipo: ");
		scanf("%s", &p[*i].t.v.g.tipo);
		printf("Digite la antiguedad: ");
		scanf("%d", &p[*i].t.v.antiguedad);
		printf("Digite el estado de la vivienda: ");
		scanf("%s", &p[*i].t.v.estado_vivienda);
		printf("Digite el propietario: ");
		scanf("%s", &p[*i].t.v.propietario);
		printf("Digite el tamanio de la vivienda: ");
		scanf("%s", &p[*i].t.v.tamano);

		break;
	
	case 3:
		printf("Digite la cobertura: ");
		scanf("%f", &p[*i].cobertura);
		printf("Digite la vigencia: ");
		scanf("%s", &p[*i].vigencia);
		printf("Digite el costo: ");
		scanf("%f", &p[*i].costo);
		printf("Digite la prima: ");
		scanf("%f", &p[*i].prima);
		printf("Digite la marca: ");
		scanf("%s", &p[*i].t.c.marca);
		printf("Digite el modelo: ");
		scanf("%s", &p[*i].t.c.modelo);
		printf("Digite la matricula: ");
		scanf("%s", &p[*i].t.c.matricula);
		printf("Digite el numero de serie: ");
		scanf("%s", &p[*i].t.c.serie);
		printf("Digite el valor del vehiculo: ");
		scanf("%d", &p[*i].t.c.valor);
		printf("Digite el numero de propietarios: ");
		scanf("%d", &p[*i].t.c.num_propietarios);
		printf("Digite el kilometraje: ");
		scanf("%d", &p[*i].t.c.kilometraje);
		printf("Digite el tipo de combustible: ");
		scanf("%s", &p[*i].t.c.tipo_combustible);
		printf("Digite el tipo de transmision: ");
		scanf("%s", &p[*i].t.c.transmision);
		printf("Digite el anio: ");
		scanf("%d", &p[*i].t.c.anio);


		break;

	case 4:
		printf("Digite la cobertura: ");
		scanf("%f", &p[*i].cobertura);
		printf("Digite la vigencia: ");
		scanf("%s", &p[*i].vigencia);
		printf("Digite el costo: ");
		scanf("%f", &p[*i].costo);
		printf("Digite la prima: ");
		scanf("%f", &p[*i].prima);
		scanf("%s", &p[*i].t.n.g.direccion);
		printf("Digite la suma asegurada: ");
		scanf("%d", &p[*i].t.n.g.suma_asegurada);
		printf("Digite el tipo: ");
		scanf("%s", &p[*i].t.n.g.tipo);
		printf("Digite los ingresos: ");
		scanf("%d", &p[*i].t.n.ingresos);
		printf("Digite el numero de empleados: ");
		scanf("%d", &p[*i].t.n.empleados);
		printf("Digite las caracteristicas del negocio: ");
		scanf("%s", &p[*i].t.n.caracteristicas);
		printf("Digite el nombre de la empresa: ");
		scanf("%s", &p[*i].t.n.nombre_empresa);
		printf("Digite su numero fiscal: ");
		scanf("%s", &p[*i].t.n.num_fiscal); 
		printf("Digite el valor del equipo: ");
		scanf("%d", &p[*i].t.n.valor_equipo);
		printf("Digite la suma asegurada: ");
		scanf("%d", &p[*i].t.n.suma_asegurada);
	
		break;
	
	default:
		
		break;
	}
}


int main(){
	int i = 0;
	int p[100];

	menu(p , &i);
	i++;
	return 0;

}
