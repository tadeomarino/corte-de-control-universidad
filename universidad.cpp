#include <iostream>
using namespace std;

int main(){

    // Declaro las variables para ingresar los registros 
    int legajo, codMat, nota, numLegAct, materiaAct, mejorPromedio = 0, mejorAlumno, mostrarLegajo;

        cout << endl << "REGISTRO # 1";

        cout << endl << "INGRESE NUMERO DE LEGAJO : ";
        cin >> legajo;

        cout << "INGRESE CODIGO DE MATERIA : ";
        cin >> codMat;

        cout << "INGRESE NOTA : ";
        cin >> nota ;

        if (nota == 10)
        {
            cout << endl << "¡El alumno " << legajo << " obtuvo un 10 en la materia " << codMat << "!" << endl;
        }
    
    while (legajo != 0)
    {
        numLegAct = legajo;

        int cantExamenes = 0, sumNotas = 0, notaMax = 0, matNotaMax, promedio, i = 2;

        while(legajo == numLegAct){

            if (nota > notaMax)
            {
                notaMax = nota;
                matNotaMax = codMat;
            }
            
            materiaAct = codMat;
            cantExamenes++;
            sumNotas+= nota;

            promedio = sumNotas / cantExamenes;

            cout << endl << "REGISTRO # " << i++ ;

            cout << endl << "INGRESE NUMERO DE LEGAJO : ";
            cin >> legajo;

            cout << "INGRESE CODIGO DE MATERIA : ";
            cin >> codMat;

            cout << "INGRESE NOTA : ";
            cin >> nota;

            if (nota == 10)
            {
                cout << endl << "¡El alumno " << legajo << " obtuvo un 10 en la materia " << codMat << "!" << endl;
            }

        }

        if (promedio > mejorPromedio)
            {
                mejorPromedio = promedio;
                mejorAlumno = numLegAct;
            }

    cout << endl << "- - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << endl << "PUNTO A : Para cada alumno el promedio de notas y la cantidad de exámenes rendidos." << endl;
    cout << endl << " - " << "ALUMNO : " << numLegAct;
    cout << endl << " - " << "PROMEDIO : " << promedio;
    cout << endl << " - " << "CANT EXAMENES : " << cantExamenes << endl; 

    cout << endl << "PUNTO B: Para cada alumno la materia que obtuvo la mejor nota." << endl;
    cout << endl << " - " << "MEJOR NOTA :" << notaMax;
    cout << endl << " - " << "MATERIA :" << materiaAct << endl;
    cout << endl << "- - - - - - - - - - - - - - - - - - - - - -" << endl;

    }
    
    cout << endl << " - " << "PUNTO C : El legajo del alumno con mejor promedio." << endl;
    cout << endl << " - " << "ALUMNO : " << mejorAlumno;
    cout << endl << " - " << "MEJOR PROMEDIO : " << mejorPromedio << endl;
    return 0;
}