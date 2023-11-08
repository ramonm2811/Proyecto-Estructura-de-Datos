#include <iostream>
#include <cstdlib>
using namespace std;

void menu_principal();
  void mantenimiento();
    void personas();
      void agregar_personas();
    void productos();
    void tiendas();


int main(){
  menu_principal();
  system("pause");
  return 0;
};


void menu_principal(){
  bool repite = true;
  int opcion;

  do {
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

      case 0: repite = false;
      break;

    };
  } while (repite);
};

void mantenimiento(){
  bool repite = true;
  int opcion;
  do {
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
  } while (repite);
  system("pause");
};

void personas(){
 bool repite = true;
  int opcion;
  do {
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
        system("pause>nul");
      break;
      
      case 113: 
        system("pause>nul");

      break;

      case 114:
        system("pause>nul");
      break;
      
      case 115: 
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
  } while (repite);
  system("pause");
};

void agregar_personas(){   //El programa se cuelga cuando agrego mas de dos palabras
  system("cls");
  int a,e;
  string b,c,d,f;
    cout<<"\n\t\tAgregar Personas";
    cout<<"\n\t----------------------------";
    cout<<"\n\tIngrese el numero de Cedula -> ";
    cin>>a;
    cout<<"\n\tIngrese ambos Apellidos -> ";
    cin>>b;
    cout<<"\n\tIngrese ambos Nombres -> ";
    cin>>c;
    cout<<"\n\tIngrese la Direccion de Vivienda -> ";
    cin>>d;
    cout<<"\n\tIngrese el numero de Telefono -> ";
    cin>>e;
    cout<<"\n\tIngrese su fecha Fecha de nacimiento -> ";
    cin>>f;
    system("cls");
    cout<<"\n\n\n\t\t\tLA PERSONA FUE INGRESADA CON EXITO";
    system("pause>nul");

    personas();
}

void productos(){
 bool repite = true;
  int opcion;
  do {
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
      case 211:
        system("pause>nul");
      break;
      
      case 212: 
        system("pause>nul");
      break;
      
      case 213: 
        system("pause>nul");
      break;

      case 214:
        system("pause>nul");
      break;
      
      case 215: 
        system("pause>nul");
      break;

      case 216: 
        system("pause>nul");
      break;
      
      case 217: 
        system("pause>nul");
      break;

      case 218: 
        system("pause>nul");
      break;

      case 0: mantenimiento();
        system("pause>nul");
      break;
    };
  } while (repite);
  system("pause");
  system("pause>nul");
};



//Productos

//********  TIENDAS 

void tiendas(){
 bool repite = true;
  int opcion;
  do {
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
  } while (repite);
  system("pause");
};


