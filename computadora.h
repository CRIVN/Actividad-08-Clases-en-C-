#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

class Computadora{
    private: 
        string Marca;
        string SistemOp;
        string NomE;
        int MemRam;
    public:
        Computadora(string,string, string,int); 
        void leer();
};

Computadora::Computadora(string_Marca,string _SistemOp,string _NomE,int _MemRam){
	
    Marca = Marca;
    SistemOp = _SistemOp;
    NomE = _NomE;
    MemRam = _MemRam;
}

void Computadora::leer(){
    cout<<"Marca: "<<Marca<<endl<<"Nombre del equipo: "<<NomE<<endl<<"Sistema Operativo: "<<SistemOp<<endl<<"Memoria Ram: "<<MemRam<<endl;
}

#endif 
