#include <iostream>
#include <string> //Libreria que me permite usar string
#include <cstdlib>
using namespace std;

struct lista_persona{
 string cedula;
 string nombre;
 string apellido;
 string direccion;
 string fecha;
 string tlf;
 lista_persona *prox;

}*ppersona=NULL;


void menu_principal();
  void mantenimiento();
    void personas();
      void agregar_personas();
      void mostrar_personas(lista_persona *p);
      void modificar_personas(lista_persona *p, string c);
    void productos();
      void agregar_productos();
    void tiendas();
      void agregar_tienda();


int main(){
  menu_principal();
  system("pause");
  return 0;
};


void menu_principal(){
  bool rep = true;
  int opcion;

  while (rep) {
    system("cls");

    cout<<"\n\t\tMenu Principal";
    cout<<"\n\t----------------------------";
    cout<<"\n\t1. Mantenimiento";
    cout<<"\n\t2. Sistema";
    cout<<"\n\t3. Reportes";
    cout<<"\n\t----------------------------";
    cout<<"\n\t0. Salir del programa";
    cout<<"\n\n\tIngrese la opcion que desea: ";
    cin>>opcion;

    switch(opcion){
      case 1: mantenimiento();
        system("pause>nul");
      break;
      
      case 2:
        system("pause>nul");
      break;
      
      case 3:
        system("pause>nul");
      break;

      case 0:
        rep = false;
        system("cls");
        cout<<"\n\n\n\t\t\tMUCHAS GRACIAS POR USAR NUESTRO PROGRAMA.\n\n\n";
        system("pause>nul");
        return;
      break;
    };
    
  };
  return;
};

void mantenimiento(){
  bool repite = true;
  int opcion;
  while (repite) {
    system("cls");

    cout<<"\n\t\tMenu de Mantenimiento";
    cout<<"\n\t----------------------------";
    cout<<"\n\t11. Personas";
    cout<<"\n\t12. Productos";
    cout<<"\n\t13. Tiendas";
    cout<<"\n\t----------------------------";
    cout<<"\n\t0. Volver al menu anterior";
    cout<<"\n\n\tIngrese la opcion que desea: ";
    cin>>opcion;

    switch(opcion){
      case 11: 
        personas();
        system("pause>nul");
      break;
      
      case 12: 
        productos();
        system("pause>nul");
      break;
      
      case 13: 
        tiendas();
        system("pause>nul");
      break;

      case 0: 
        menu_principal();
      break;
    };
  } ;
  system("pause");
        return;
};


//   PERSONAS------------
void personas(){
        string a;
 bool repite = true;
  int opcion;
  while (repite) {
    system("cls");

    cout<<"\n\t\tMantenimiento de Personas";
    cout<<"\n\t----------------------------";
    cout<<"\n\t111. Agregar";
    cout<<"\n\t112. Modificar";
    cout<<"\n\t113. Consultar por cédula";
    cout<<"\n\t114. Consultar por nombre";
    cout<<"\n\t115. Mostrar todos ordenados por cedula";
    cout<<"\n\t116. Mostrar todos ordenados por nombre";
    cout<<"\n\t117. Eliminar persona";
    cout<<"\n\t----------------------------";
    cout<<"\n\t0. Volver al menu anterior";
    cout<<"\n\n\tIngrese la opcion que desea: ";
    cin>>opcion;

    switch(opcion){
      case 111: 
        agregar_personas();
        system("pause>nul");
      break;
      
      case 112: 
        system("cls");
        cout<<"\n\n\t\tIngrese la cedula de la persona que desea modificar -> ";
        cin.ignore();
        getline(cin,a);
        modificar_personas(ppersona,a);
        system("pause>nul");
      break;
      
      case 113: 
        system("pause>nul");

      break;

      case 114:
        system("pause>nul");
      break;
      
      case 115: mostrar_personas(ppersona);
        system("pause>nul");
      break;

      case 116: 
        system("pause>nul");
      break;
      
      case 117: 
        system("pause>nul");
      break;

      case 0: mantenimiento();
      system("pause>nul");
    break;
    };
  } ;
  system("pause");
      return;
};

void agregar_personas(){   //El programa se salta la primera linea 
  system("cls");
  lista_persona *t = new lista_persona;
    cout<<"\n\t\tAgregar Personas";
    cout<<"\n\t----------------------------"<<endl;
    cout<<"\n\tIngrese el numero de Cedula -> ";
    cin.ignore(); //Me ayuda a que el programa NO se salte la primera entrada
    getline(cin, t->cedula);
    cout<<"\n\tIngrese ambos Nombres -> ";
    getline(cin, t->nombre); //Para poder recibir un string con mas de un espacio necesitamos usar la funcion getline(), NO cin>>
    cout<<"\n\tIngrese ambos Apellidos -> "; 
    getline(cin, t->apellido); 
    cout<<"\n\tIngrese su fecha Fecha de nacimiento -> ";
    getline(cin, t->fecha);
    cout<<"\n\tIngrese la Direccion de Vivienda -> ";
    getline(cin, t->direccion);
    cout<<"\n\tIngrese el numero de Telefono -> ";
    getline(cin, t->tlf);

    //Muestra el RESULTADO de la persona Ingresada
    system("cls");
    cout<<"\n\n\n\t\t\tLA PERSONA FUE INGRESADA CON EXITO";
    cout<<"\n\t\t\t----------------------------";
    cout<<"\n\t\t\tNombre: "<< t->nombre;
    cout<<"\n\t\t\tApellido; "<< t->apellido;
    cout<<"\n\t\t\tCedula: "<< t->cedula;
    cout<<"\n\t\t\tFecha de Nacimiento: "<< t->fecha;
    cout<<"\n\t\t\tDireccion: "<< t->direccion;
    cout<<"\n\t\t\tTlf: "<< t->tlf;
    cout<<"\n\t\t\t----------------------------";
    system("pause>nul");

    if (ppersona==NULL){
      t->prox = NULL;
      ppersona = t;
    } else {
      t->prox = ppersona;
      ppersona = t;
    }

    personas();
    return;
}

void modificar_personas(lista_persona *p, string c){
  lista_persona *aux=p;
  if (!aux){
    cout<<"\n\t\tNo hay personas para modificar";
  }
  while (aux){
    if (aux->cedula == c){
      cout<<"\n\t\tModificar Personas";
      cout<<"\n\t----------------------------"<<endl;
      cout<<"\n\tIngrese el numero de Cedula -> ";
      cin.ignore(); //Me ayuda a que el programa NO se salte la primera entrada
      getline(cin, aux->cedula);
      cout<<"\n\tIngrese ambos Nombres -> ";
      getline(cin, aux->nombre); //Para poder recibir un string con mas de un espacio necesitamos usar la funcion getline(), NO cin>>
      cout<<"\n\tIngrese ambos Apellidos -> "; 
      getline(cin, aux->apellido); 
      cout<<"\n\tIngrese su fecha Fecha de nacimiento -> ";
      getline(cin, aux->fecha);
      cout<<"\n\tIngrese la Direccion de Vivienda -> ";
      getline(cin, aux->direccion);
      cout<<"\n\tIngrese el numero de Telefono -> ";
      getline(cin, aux->tlf);
      return;
    } 
    
  aux=aux->prox;
  } 
    if (!aux){
    cout<<"\n\tEl numero de cedula "<<c<<" no existe en nuestra base de datos";
    system("pause>nul");
  }
};

void mostrar_personas(lista_persona *p){
  system("cls");
  while (p){
    cout<<"\n\t\t\t---------------------------------";
    cout<<"\n\t\t\t"<<p->nombre;
    cout<<"\n\t\t\t"<<p->apellido;
    cout<<"\n\t\t\t"<<p->cedula;
    cout<<"\n\t\t\t"<<p->direccion;
    cout<<"\n\t\t\t"<<p->fecha;
    cout<<"\n\t\t\t"<<p->tlf;
    p=p->prox;
  };
  system("pause>nul");
}


//   PRODUCTOS------------
void productos(){
 bool repite = true;
  int opcion;
  while (repite) {
    system("cls");

    cout<<"\n\t\tMantenimiento de Productos";
    cout<<"\n\t----------------------------";
    cout<<"\n\t121. Agregar";
    cout<<"\n\t122. Modificar";
    cout<<"\n\t123. Consultar por código";
    cout<<"\n\t124. Consultar por nombre";
    cout<<"\n\t125. Mostrar todos ordenados por código";
    cout<<"\n\t126. Mostrar todos ordenados por nombre";
    cout<<"\n\t127. Mostrar todos ordenados por precio";
    cout<<"\n\t128. Eliminar producto";
    cout<<"\n\t----------------------------";
    cout<<"\n\t0. Volver al menu anterior";
    cout<<"\n\n\tIngrese la opcion que desea: ";
    cin>>opcion;

    switch(opcion){
      case 121:
      agregar_productos();
        system("pause>nul");
      break;
      
      case 122: 
        system("pause>nul");
      break;
      
      case 123: 
        system("pause>nul");
      break;

      case 124:
        system("pause>nul");
      break;
      
      case 125: 
        system("pause>nul");
      break;

      case 126: 
        system("pause>nul");
      break;
      
      case 127: 
        system("pause>nul");
      break;

      case 128: 
        system("pause>nul");
      break;

      case 0: mantenimiento();
        system("pause>nul");
      break;
    };
  } ;
  system("pause");
  system("pause>nul");
        return;
};

void agregar_productos(){   //El programa se cuelga cuando agrego mas de dos palabras
  system("cls");
  string a,c,d;
  string b;
    cout<<"\n\t\tAgregar Productos";
    cout<<"\n\t----------------------------";
    cout<<"\n\tIngrese el codigo del producto -> ";
    cin.ignore();
    getline(cin,a);
    cout<<"\n\tIngrese una descripcion del producto -> ";
    getline(cin,b);
    cout<<"\n\tIngrese el peso / volumen del producto -> ";
    getline(cin,c);
    cout<<"\n\tIngrese el precio del producto -> ";
    getline(cin,d);

//Muestra el RESULTADO del producto Ingresado
    system("cls");
    cout<<"\n\n\n\t\t\tEL PRODUCTO FUE INGRESADO CON EXITO";
    cout<<"\n\t\t\t----------------------------";
    cout<<"\n\t\t\tCodigo: "<< a;
    cout<<"\n\t\t\tDescripcion: "<< b;
    cout<<"\n\t\t\tPeso / Volumen: "<< c;
    cout<<"\n\t\t\tPrecio: "<<d;
    cout<<"\n\t\t\t----------------------------";
    system("pause>nul");

    productos();
    return;
}


//   TIENDAS------------
void tiendas(){
 bool repite = true;
  int opcion;
  while (repite) {
    system("cls");

    cout<<"\n\t\tMantenimiento de Tiendas";
    cout<<"\n\t----------------------------";
    cout<<"\n\t131. Agregar";
    cout<<"\n\t132. Modificar";
    cout<<"\n\t133. Consultar por número de tienda";
    cout<<"\n\t134. Consultar por nombre de tienda";
    cout<<"\n\t135. Mostrar todos ordenados por numero de tienda";
    cout<<"\n\t136. Mostrar todos ordenados por nombre de tienda";
    cout<<"\n\t137. Eliminar tienda";
    cout<<"\n\t----------------------------";
    cout<<"\n\t0. Volver al menu anterior";
    cout<<"\n\n\tIngrese la opcion que desea: ";
    cin>>opcion;

    switch(opcion){
      case 131: 
        agregar_tienda();
        system("pause>nul");
      break;
      
      case 132: 
        system("pause>nul");
      break;
      
      case 133: 
        system("pause>nul");
      break;

      case 134:
        system("pause>nul");
      break;
      
      case 135: 
        system("pause>nul");
      break;

      case 136: 
        system("pause>nul");
      break;
      
      case 137: 
        system("pause>nul");
      break;

      case 0: mantenimiento();
        system("pause>nul");
      break;
    };
  } ;
  system("pause");
        return;
};

void agregar_tienda(){   //El programa se cuelga cuando agrego mas de dos palabras
  system("cls");
  string a,e;
  string b,c;
    cout<<"\n\t\tAgregar Tienda";
    cout<<"\n\t----------------------------";
    cout<<"\n\tIngrese el numero de Tienda -> ";
    cin.ignore();
    getline(cin,a);
    cout<<"\n\tIngrese el nombre de la Tienda -> ";
    getline(cin,b);
    cout<<"\n\tIngrese la Direccion-> ";
    getline(cin,c);
    cout<<"\n\tIngrese el numero de Telefono -> ";
    getline(cin,e);
    
    //Muestra el RESULTADO de la persona Ingresada
    system("cls");
    cout<<"\n\n\n\t\t\tLA TIENDA FUE INGRESADA CON EXITO";
    cout<<"\n\t\t\t----------------------------";
    cout<<"\n\t\t\tNumero de tienda: "<< a;
    cout<<"\n\t\t\tNombre de la tienda: "<< b;
    cout<<"\n\t\t\tDireccion: "<< c;
    cout<<"\n\t\t\tTlf: "<< e;
    cout<<"\n\t\t\t----------------------------";
    system("pause>nul");

    tiendas();
    return;
}

